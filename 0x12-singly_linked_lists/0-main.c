#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	list_t *head;
	list_t *new;
	list_t hello = {"World", 5, NULL};
	list_t	

	head = &hello;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}
	new->str = strdup("Hello");
	new->len = 5;
	new->next = head;
	head = new;
	node1 = *head;
	print_list(head);
	node1 = *head;

	printf("\n\n");

	new = malloc(sizeof(list_t));
	new->str = "hola";
	new->len = 100;
	new->next = &hello;
	node1.next = new;

	print_list(head);



	return (0);
}
