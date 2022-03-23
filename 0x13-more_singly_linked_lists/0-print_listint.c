#include "lists.h"

/**
 * print_listint - print value of n for all elements of a listint_t list
 * @h: pointer to first node in list
 *
 * Return: number of nodes in list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *node;
	int count = 0;

	node = h;

	while (node != NULL)
	{
		printf("%i\n", node->n);
		node = node->next;
		count++;
	}

	return (count);
}
