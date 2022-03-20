#include "lists.h"

/**
 * print_list - prints contents of each element of singly linked list
 * @h: pointer to head node in a list
 *
 * Return: number of nodes in list
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);

		h = h->next;
		i++;
	}

	return (i);

}
