#include <stdio.h>
#include "main.h"

/**
 * _strspn - find number of initial bytes in s also in accept
 * @s: string to search
 * @accept: list of characters to search for
 *
 * Return: number of initial matching bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i])
	{
		j = 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				break;
			}
			else
			{
				j++;
			}
		}
		if (!accept[j])
			break;
		i++;
	}
	return (i);
}
