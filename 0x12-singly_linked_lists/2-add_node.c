#include "lists.h"

/**
 * add_node - add a new node at the beginning of a list_t list
 * @head: pointer to pointer to node
 * @str: pointer to char string
 *
 * Return: pointer to newly created node
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	list_t *new;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	dup = strdup(str);
	if (dup == NULL)
	{
		free(dup);
		return (NULL);
	}

	len = strlen(dup);

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
