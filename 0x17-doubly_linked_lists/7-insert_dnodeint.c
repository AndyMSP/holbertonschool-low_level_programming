#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node into a list
 * @h: double pointer to first node in list
 * @idx: index for new node
 * @n: value for new node
 *
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{

	dlistint_t *new, *before, *after, *node;
	unsigned int i;

	if (idx == 0)
		return (add_dnodeint(h, n));

	node = *h;
	i = 0;

	while (node != NULL)
	{
		i++;
		if (i == idx)
		{
			if (node->next == NULL)
				return (add_dnodeint_end(h, n));
			before = node;
			after = node->next;
			break;
		}
		node = node->next;
	}

	if (node == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	before->next = new;
	after->prev = new;
	new->prev = before;
	new->next = after;
	new->n = n;

	return (new);
}
