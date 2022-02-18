#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: a string
 * @s2: a string
 *
 * Return: 0 if equal or difference in ascii value of first
 * differing value
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int diff = 0;

	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		i++;
	}

	return (diff);
}
