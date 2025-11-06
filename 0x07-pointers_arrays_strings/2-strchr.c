#include <stdio.h>
#include "main.h"

/**
 * _strchr - Find a character in a string
 * @s: string to search
 * @c: character to search for
 *
 * Return: Pointer to first character found or null
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (!c)
	{
		return (s);
	}
	return (0);
}
