#include "main.h"
#include <stdio.h>

/**
* _print_rev_recursion - prints a string in reverse
* @s: pointer to a character
*
* Return: void
*/

void _print_rev_recursion(char *s)
{
	if (*s == 0)
	{
		return;
	}
	else
	{
		s++;
		_print_rev_recursion(s);
		_putchar(s[-1]);
	}
}
