#include "main.h"

/**
 * print_triangle - Print a triangle in the terminal
 * @size: integer height of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, spaces, hashes;

	if (size <= 0)
	{
		_putchar('\n');
		size = 0;
	}

	for (i = 1; i <= size; i++)
	{
		spaces = size - i;
		hashes = size - spaces;

		for (j = 0; j < spaces; j++)
		{
			_putchar('.');
		}
		for (j = 0; j < hashes; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
