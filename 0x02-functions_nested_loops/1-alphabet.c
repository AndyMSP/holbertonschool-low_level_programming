#include "main.h"

/**
 *print_alphabet - prints the alphabet followed by a new line
 *
 * Return: Always returns 0
 */
void print_alphabet(void)
{
	char i = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
