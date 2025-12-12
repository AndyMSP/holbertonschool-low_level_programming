#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - add node to beginning of list
 * @head: double pointer to first node
 * @str: string to go into str element of new node
 *
 * Return: Pointer to new node or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	len = 0;
	while (str[len])
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
