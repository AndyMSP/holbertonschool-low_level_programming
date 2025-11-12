#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Find length of string recursively
 * @s: string to examine
 *
 * Return: int length of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (!*s)
	{
		return (0);
	}

	s++;
	len = _strlen_recursion(s) + 1;
	return (len);
}
