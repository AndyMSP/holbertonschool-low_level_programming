#include "lists.h"

/**
 * print_dlistint - print elements of doubly linked list
 * @h: pointer to dlistin_t
 *
 * Return: size_t number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{

	size_t size = 0;
	const dlistint_t *node;

	node = h;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		size++;
		node = node->next;
	}

	return (size);
}
