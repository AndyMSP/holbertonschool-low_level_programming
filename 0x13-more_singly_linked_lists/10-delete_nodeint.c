#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at specified index
 * @head: pointer to pointer to first node
 * @index: node to delete
 *
 * Return: 1 if successful and -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *pre, *nex, *cur;

	if (*head == NULL)
		return (-1);

	cur = *head;

	if (index == 0)
	{
		*head = cur->next;
		free(cur);
		return (1);
	}

	while (i < index)
	{
		pre = cur;
		cur = cur->next;
		if (cur == NULL)
			return (-1);
		i++;
	}

	nex = cur->next;
	pre->next = nex;

	free(cur);
	return (1);
}
