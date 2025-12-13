#include "lists.h"
#include "stdlib.h"

/**
 * free_list - free all allocated memory from linked list
 * @head: pointer to first node
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *node, *next;

	node = head;
	if (!node)
		return;

	while (node->next)
	{
		next = node->next;
		free(node->str);
		free(node);
		node = next;
	}
	free(node->str);
	free(node);
}
