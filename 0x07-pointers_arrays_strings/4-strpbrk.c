#include <stdio.h>
#include "main.h"

/**
 * _match - determines if a char ch matches any char from a string
 * @ch: character
 * @accept: pointer to character
 *
 * Return: int 1 if match and 0 if no match
 */

int _match(char ch, char *accept)
{
	int i = 0;

	while (accept[i])
	{
		if (accept[i] == ch)
			return (1);
		i++;
	}

	return (0);
}

/**
 * _strpbrk - finds first character in a string which matches any
 *	character from another string
 * @s: a string
 * @accept: bytes to match
 *
 * Return: pointer to first matching byte in s or NULL if no match found
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i])
	{
		if (_match(s[i], accept))
			return (s + i);

		++i;
	}

	return (NULL);
}
