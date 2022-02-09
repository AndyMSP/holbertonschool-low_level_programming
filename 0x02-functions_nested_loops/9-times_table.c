#include "main.h"

/**
 * times_table - Prints a multiplication chart
 *
 * Return: void
 */
void times_table(void)
{

	int i;
	int j;
	int num;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			num = i * j;

			if (num < 10)
			{
				_putchar('0' + num);
				if (j < 9)
					_putchar(',');
				if ((i * (j + 1) < 10))
				{
					if (!(j == 9 && i == 0))
						_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + num / 10);
				_putchar('0' + num % 10);
				if (j < 9)
					_putchar(',');
			}
			if (j < 9)
				_putchar(' ');

		}
		_putchar('\n');
	}

}
