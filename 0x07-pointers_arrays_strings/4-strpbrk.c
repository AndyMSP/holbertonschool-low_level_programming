#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - find first byte in s that matches a byte in accept
 * @s: string to search
 * @accept: list of characters to search for
 *
 * Return: pointer to the first matching byte or null
 */
char *_strpbrk(char *s, char *accept)
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
				return (&s[i]);
			}
			else
			{
				j++;
			}
		}
		if (!accept[j])
			i++;
	}
	return (0);
}
