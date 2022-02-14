#include "main.h"

/**
 * _strlen - Calculates length of a string
 * @str: a string ending with '\0'
 *
 * Return: int length of string
 */

int _strlen(char *s)
{
	int i;
	int c;

	for (i = 0; c != '\0'; i++)
	{
		c = *(s + i);
	}

	return (i-1);

}
