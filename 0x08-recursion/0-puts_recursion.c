#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: a pointer to a character
 *
 * Return: No return value
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
		_putchar('\n');
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
