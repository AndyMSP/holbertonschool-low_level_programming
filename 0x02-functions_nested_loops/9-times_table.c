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

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			num = i * j;
			if (num < 10)
			{
				_putchar('0' + num);
				if (j != 10)
					_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else
			{
				_putchar('0' + num / 10);
				_putchar('0' + num % 10);
				_putchar(',');
				_putchar(' ');
			}

		}
		_putchar('\n');
	}

}
