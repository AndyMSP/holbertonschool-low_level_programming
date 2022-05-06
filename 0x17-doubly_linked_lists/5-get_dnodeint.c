#include "lists.h"

/**
 * get_dnodeint_at_index - return value at node index
 * @head: pointer to first node
 * @index: node in which value should be found
 *
 * Return: n value
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	node = head;
	i = 0;

	while (node != NULL)
	{
		if (i == index)
			return (node);
		i++;
		node = node->next;
	}

	return (NULL);
}
