#include "lists.h"

/**
 * free_list - frees all memory allocated for list_t
 * @head: pointer to first node of type list_t
 *
 * Return: no return value
 */
void free_list(list_t *head)
{
	list_t *node, *temp;

	node = temp = head;

	while (node->next != NULL)
	{
		temp = node;
		free(node->str);
		free(node);
		node = temp->next;
	}

	free(node->str);
	free(node);
}
