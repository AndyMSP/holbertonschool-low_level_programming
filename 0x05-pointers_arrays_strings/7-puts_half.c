#include "main.h"
#include <stdio.h>

/**
* puts_half - prints the second half of a string
* @str: a string
*
* Return: No return value
*/

void puts_half(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len])
		len++;

	while (str[i] != '\0')
	{
		if ((i % 2 == 0 && i > len / 2) || ((i % 2 == 1) && i > (len - 1) / 2))
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
