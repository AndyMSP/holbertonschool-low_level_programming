#include "lists.h"

/**
 * add_dnodeint - add node to head of doubly linked list
 * @head: double pointer to first node
 * @n: int value for new nodes data
 *
 * Return: pointer to dlistint_t node that was added
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	new->next = *head;
	new->n = n;
	*head = new;
	new->prev = NULL;

	return(new);

}
