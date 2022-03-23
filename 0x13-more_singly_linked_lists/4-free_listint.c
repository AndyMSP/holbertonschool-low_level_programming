#include "lists.h"

/**
 * free_listint - frees entire list of type listint_t
 * @head: pointer to start of list
 *
 * Return: no return value
 */
void free_listint(listint_t *head)
{
	listint_t *temp, *del;

	temp = head;

	while (temp != NULL)
	{
		del = temp;
		temp = temp->next;
		free(del);
	}
}
