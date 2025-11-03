#include "main.h"
#include <stdio.h>

/**
 * puts_half - Print half of a string
 * @str: pointer to char (string)
 *
 * Return: Void
 */
void puts_half(char *str)
{
	int i, len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = len - len / 2; i <= len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
