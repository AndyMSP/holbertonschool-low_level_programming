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
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int match = 1;

	do {
		j = 0;
		while (accept[j] != s[i])
		{
			if (accept[j] == '\0')
			{
				match = 0;
				break;
			}
			j++;
		}
		i++;
	} while (match);

	return (i - 1);
}
