#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compare two strings
 * @s1: first string for comparison
 * @s2: second string to compare
 *
 * Return: int - positive if s1>s2, 0 if equal and negative if s1<s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (!(*s1))
			return (-1 * *s2);
		else if (!(*s2))
			return (*s1);
		else if (*s1 != *s2)
			return (*s1 - *s2);

		s1++;
		s2++;
	}

	return (0);
}
