#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: pointer to const listint_t element
 *
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *node;
	size_t count = 0;

	node = h;

	while (node != NULL)
	{
		node = node->next;
		count++;
	}

	return (count);
}
