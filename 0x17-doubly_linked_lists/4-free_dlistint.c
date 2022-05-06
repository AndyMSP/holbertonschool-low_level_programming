#include "lists.h"

/**
 * free_dlistint - free entire doubly linked list
 * @head: pointer to head of list
 *
 * Return: No return value (void)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node, *next;

	if (head == NULL)
		return;

	node = head;

	while (node->next != NULL)
	{
		next = node->next;
		free(node);
		node = next;
	}

	free(node);
}
