#include "main.h"

/**
 * puts2 - Print every other character of a string followed by a new line
 * @str: pointer to char (string)
 * Return: Void
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);

		str++;
		if (*str == '\0')
			break;

		str++;
	}
	_putchar('\n');
}
