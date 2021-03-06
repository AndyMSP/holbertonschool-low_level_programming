#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a listint_t list
 * @head: pointer to pointer to first node
 * @n: integer value to assign to newly created node
 *
 * Return: address of new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (0);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	node = *head;
	while (node->next != NULL)
	{
		node = node->next;
	}
	node->next = new;

	return (new);
}
