#include "lists.h"

/**
 * pop_listint - removes first node from a list and returns that nodes data
 * @head: pointer to pointer to first node
 *
 * Return: integer value of n
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *del;

	if (head == NULL || *head == NULL)
		return (0);

	n = (*head)->n;
	del = *head;
	*head = (*head)->next;

	free(del);

	return (n);
}
