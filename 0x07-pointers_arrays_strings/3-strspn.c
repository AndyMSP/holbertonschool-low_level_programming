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
		for (j = 0; accept[j] >= 0; j++)
		{
			if (s[i] == accept[j])
			{
				i++;
				matched = 1;
				printf("Match: i = %d, s[i] = %c, j = %c, accept[j] = %c\n", i, s[i], j, accept[j]);
				break;
			}
			else
			{
				matched = 0;
				printf("NOO Match: i = %d, s[i] = %c, j = %d, accept[j] = %d\n", i, s[i], j,     accept[j]);
			}
		}
	}

	return (i);
}