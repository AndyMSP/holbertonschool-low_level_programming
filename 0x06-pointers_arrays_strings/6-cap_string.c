#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes first letter of every word in a string
 * @str: string to be processed
 *
 * Return: str
 */
char *cap_string(char *str)
{
	int i, j;
	char delims[] = " \n\t,;.!?\"(){}";

	/* First byte edge case */
	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] + 'A' - 'a';
	}
	if (str[i])
	{
		i = 1;
	}

	/* Subsequent bytes case */
	while (str[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i - 1] == delims[j])
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] + 'A' - 'a';
				}
			}
		}
		i++;
	}

	return (str);
}
