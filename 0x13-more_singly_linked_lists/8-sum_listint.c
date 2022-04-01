#include "lists.h"

/**
 * sum_listint - sum all data (n) of linked list
 * @head: pointer to node of linked list
 *
 * Return: int sum or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
