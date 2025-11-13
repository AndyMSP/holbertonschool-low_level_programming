#include "main.h"

/**
 * _strlen - Return length of a string
 * @s: pointer to char (a string)
 *
 * Return: int number of characters in s
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
