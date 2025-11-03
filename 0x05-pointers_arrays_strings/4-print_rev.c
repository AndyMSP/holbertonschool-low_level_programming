#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: pointer to char (string)
 *
 * Return: Void
 */
void print_rev(char *s)
{
	int i, len;

	len = _strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
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
