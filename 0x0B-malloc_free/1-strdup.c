#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - Calculates length of a string
 * @s: a string ending with '\0'
 *
 * Return: int length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}

	return (i + 1);
}


/**
 * _strdup - Allocate memory for a string and initialize the
 *	the memory with input value str
 * @str: a pointer to a character
 *
 * Return: pointer to a string if succesful or 0 if failed
 */

char *_strdup(char *str)
{
	int len = 0;
	int i = 0;
	char *dup;

	len = _strlen(str);

	printf("len = %d\n", len);

	dup = malloc(sizeof(*dup) * len);

	if (dup == NULL)
		return (0);

	if (str == NULL)
		return (0);

	for (i = 0; i < len; ++i)
	{
		dup[i] = str[i];
	}

	return (dup);
}
