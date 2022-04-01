#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at specific location in linked list
 * @head: pointer to head
 * @idx: location of new node where idx starts at 0
 * @n: integer value to place in new node
 *
 * Return: address of new node or NULL upon failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int i = 0;
	listint_t *new, *node;

	if (*head == NULL)
		return (NULL);

	node = *head;

	while (i < (int)idx - 1)
	{
		if (node == NULL)
			return (NULL);
		node = node->next;
		i++;
	}

	if (node == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;

	}
	else
	{
		new->n = n;
		new->next = node->next;
		node->next = new;
	}

	return (new);
}
