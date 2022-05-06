#include "lists.h"

/**
 * sum_dlistint - return sum of all data (n) in doubly linked list
 * @head: pointer to first node in list
 *
 * Return: int sum of all n values
 */
int sum_dlistint(dlistint_t *head)
{

	dlistint_t *node;
	int sum;

	node = head;
	sum = 0;

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);

}
