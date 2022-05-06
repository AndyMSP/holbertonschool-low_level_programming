#include "lists.h"

/**
 * dlistint_len - return number of elements in linked list
 * @h: pointer to dlistint_t node
 *
 * Return: size_t number of elements in list
 */
size_t dlistint_len(const dlistint_t *h)
{

	size_t size = 0;
	const dlistint_t *node = h;

	while (node != NULL)
	{
		size++;
		node = node->next;
	}

	return (size);
}
