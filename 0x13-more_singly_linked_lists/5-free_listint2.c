#include "lists.h"

/**
 * free_listint2 - frees entire list of type listint_t and assign head to NULL
 * @head: pointer to pointer to first node
 *
 * Return: no return value
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *del;

	temp = *head;

	while (temp != NULL)
	{
		del = temp;
		temp = temp->next;
		free(del);
	}

	*head = NULL;
}
