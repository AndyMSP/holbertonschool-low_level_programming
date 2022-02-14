#include "main.h"
#include <stdio.h>

int len(char *s);

/**
 * print_rev - prints argument string in reverse
 * @str: pointer to a string
 *
 * Return: No return value
 */

void print_rev(char *str)
{
	int i;

	for (i = len(str); i > 0; i--)
	{
		_putchar(str[i - 1]);
	}
	_putchar('\n');
}

/**
 * len - Calculates length of a string
 * @s: a string ending with '\0'
 *
 * Return: int length of string
 */

int len(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}

	return (i);

}
