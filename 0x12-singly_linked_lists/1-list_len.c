#include "lists.h"
#include <stdlib.h>

/**
 * list_len - find length of singly linked list
 * @h: pointer to first node in list
 *
 * Return: size_t number of nodes in list
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *node;

	node = h;

	while (node)
	{
		node = node->next;
		len++;
	}

	return (len);
}
