#include "lists.h"

/**
 * list_len - finds number of elements in a linked list of type list_t
 * @h: pointer to head node in a list
 *
 * Return: number of nodes in list
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}

	return (i);

}
