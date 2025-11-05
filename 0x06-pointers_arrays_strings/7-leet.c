#include <stdio.h>
#include "main.h"

/**
 * leet - encode a string to 1337
 * @str: string to be encoded
 *
 * Return: str
 */
char *leet(char *str)
{
	int i, j;

	char tr[] = "aA44eE33oO00tT77lL11";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; tr[j] != '\0'; j++)
		{
			if (str[i] == tr[j])
			{
				str[i] = tr[j + 2];
				break;
			}
		}
	}

	return (str);
}
