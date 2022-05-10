#include "main.h"

/**
 * _puts - Prints a string to standard output
 * @str: a string
 *
 * Return: No return value
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
