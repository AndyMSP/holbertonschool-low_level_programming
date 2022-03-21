#include "lists.h"

/**
 * add_node_end - adds a node to the end of a linked list
 * @head: pointer to pointer to node
 * @str: pointer to char
 *
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *node;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = NULL;

	node = *head;
	if (node == NULL)
	{
		*head = new;
		return (new);
	}

	while (node->next != NULL)
	{
		node = node->next;
	}

	node->next = new;

	return (new);
}
