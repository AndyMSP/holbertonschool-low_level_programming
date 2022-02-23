#include "main.h"
#include <stdio.h>

/**
 * _strspn - Return the number of bytes in the initial segment of s which
 * consists only of bytes from accept.
 * @s: pointer to a character
 * @accept: character string
 *
 * Return: Number of bytes in initial segment of s which consist of accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	char ch;

	ch = s[i];
	while (_match(ch, accept))
	{
		i++;
		ch = s[i];
	}

	return (i);
}

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
