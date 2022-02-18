#include "main.h"

/**
 * cap_string - Capitalize first letter of each word
 * @str: pointer to a string
 *
 * Return: pointer to string
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' ||
			str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
			str[i] == '"' || str[i] == 40 || str[i] == 41 || str[i] == '{' ||
			str[i] == '}')
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		else
			i++;
	}

	return (str);
}
