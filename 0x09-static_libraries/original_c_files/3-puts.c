#include "main.h"

/**
 * _puts - print string and new line to stdout
 * @str: pointer to char (string) to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != 0; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
