#include "main.h"

/**
 * rev_string - reverse a string
 * @s: pointer to char (string)
 *
 * Return: Void
 */
void rev_string(char *s)
{
	int i, len;
	char tmp;

	len = _strlen(s);

	for (i = 0; i <= len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}

/**
 * _strlen - Return length of a string
 * @s: pointer to char (a string)
 *
 * Return: int number of characters in s
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
