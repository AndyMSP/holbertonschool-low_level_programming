#include "lists.h"
#include "string.h"
#include <stddef.h>

/**
 * add_node_end - add node to the end of linked list
 * @head: double pointer to first node
 * @str: string to go into str element of new node
 *
 * Return: Address of new element or null on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL, *node = NULL;
	unsigned int len;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	node = *head;

	new->str = strdup(str);

	len = 0;
	while (str[len])
		len++;

	new->len = len;
	new->next = NULL;

	if (!node)
		*head = new;
	else
	{

		while (node->next)
		{
			node = node->next;
		}

		node->next = new;
	}

	return (new);
}
