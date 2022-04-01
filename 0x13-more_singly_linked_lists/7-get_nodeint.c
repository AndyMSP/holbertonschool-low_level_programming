#include "lists.h"

/**
 * get_nodeint_at_index - returns value of int stored in nth node
 * @head: pointer to first node in linked list
 * @index: n where n = 0 is the first node
 *
 * Return: pointer to nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i, n;
	listint_t *node;

	n = index;
	node = head;

	for (i = 0; i < n; i++)
	{
		if (node == NULL)
			return (NULL);

		node = node->next;
	}

	return (node);
}
