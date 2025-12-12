#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - print str elements of each node in linked list
 * @h: pointer to first node of linked list
 *
 * Return: number of nodes in list
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *node = NULL;

	node = h;

	while (node)
	{
		if (!node->str)
			printf("[%ld] (nil)\n", i);
		else
			printf("[%ld] %s\n", i, node->str);
		node = node->next;
		i++;
	}

	return (i);
}
