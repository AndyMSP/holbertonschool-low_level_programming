#include "main.h"

/**
 * string_toupper - convert all lowercase letters to uppercase
 * @str: pointer to a string
 *
 * Return: pointer to string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	i++;
	}

	return (str);
}
