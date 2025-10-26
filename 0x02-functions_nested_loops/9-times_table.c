#include "main.h"
#include <stdio.h>

/**
 * times_table - prints a 10x10 times table
 *
 * Return: Always 0
 */
int times_table(void)
{
	int i, j, product;
	char tens, ones;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			tens = '0' + product / 10;
			if (tens == '0')
			{
				tens = ' ';
			}
			ones = '0' + product % 10;

			if (j == 0)
			{
				_putchar('0');
				_putchar(',');
				_putchar(' ');
			}
			else if (j != 0 && j != 9)
			{
				_putchar(tens);
				_putchar(ones);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(tens);
				_putchar(ones);
			}
		}
		_putchar('\n');
	}

	return (0);
}
