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

	return (i);

}
