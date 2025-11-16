#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - create a copy of a string in new memory
 * @str: string to copy
 *
 * Return: pointer to the copied string or Null if failed or zero length
 */
char *_strdup(char *str)
{
	unsigned int i, len = 0;
	char *cpy;

	/* Determine length with checks */
	if (!str || !*str)
		return (NULL);

	len = 1;
	while (str[len])
	{
		len++;
	}

	/* Allocate memory with checks */
	cpy = malloc(len * sizeof(char));
	if (!cpy)
		return (NULL);

	/* Assign values to new memory */
	for (i = 0; i < len; i++)
	{
		cpy[i] = str[i];
	}
	/* str[i] = '\0'; */

	return (cpy);
}
