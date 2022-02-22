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
	int matched = 1;

	while (s[i] && matched == 1)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				i++;
				matched = 1;
				break;
			}
			else
				matched = 0;
		}
	if (accept[0] == 0)
		return (0);
	}

	return (i);
}
