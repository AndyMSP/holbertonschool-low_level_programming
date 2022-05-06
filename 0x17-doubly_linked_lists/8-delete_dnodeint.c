#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: double pointer to head
 * @index: node to be deleted (0 is first node)
 *
 * Return: 1 if successful or -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node, *del, *before, *after;
	unsigned int i;

	node = *head;

	if (index == 0)
	{
		if (node == NULL)
			return (1);
		else
		{
			*head = node->next;
			free(node);
			return(1);
		}
	}

	i = 0;
	while (node != NULL)
	{
		if (i == index)
		{
			del = node;
			before = del->prev;
			after = del->next;
			break;
		}
		i++;
		node = node->next;
	}

	if (node == NULL)
	{
		return(-1);
	}

	if(after == NULL)
	{
		before->next = after;
		free(del);
		return(1);
	}

	before->next = del->next;
	after->prev = del->prev;
	free(del);
	return(1);
}
