#include "main.h"

/**
 * puts2 - prints every other character in a string
 * @str: a string of any length
 *
 * Return: No return value
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
