#include "lists.h"

/**
 * add_dnodeint_end - add node to end of doubly linked list
 * @head: double pointer to head
 * @n: const int val to assign to new node
 *
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end, *node;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		new->prev = *head;
		new->next = NULL;
		new->n = n;
		return (new);
	}

	node = *head;
	while (node != NULL)
	{
		end = node;
		node = node->next;
	}

	new->n = n;
	new->next = NULL;
	new->prev = end;
	end->next = new;

	return (new);
}
