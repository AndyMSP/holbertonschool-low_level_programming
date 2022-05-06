#include "lists.h"

/**
 * print_rev - print elements of doubly linked list in reverse
 * @t: pointer to dlistin_t
 *
 * Return: size_t number of nodes
 */
size_t print_rev(const dlistint_t *t)
{

	size_t size = 0;
	const dlistint_t *node;

	node = t;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		size++;
		node = node->prev;
	}

	return (size);
}

