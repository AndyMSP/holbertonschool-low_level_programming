#include "main.h"

/**
 * more_numbers - print 0-14 ten times
 *
 * Return: void
 */
void more_numbers(void)
{
	int n, i;
	char tens, ones;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			tens = '0' + n / 10;
			ones = '0' + n % 10;
			if (n >= 10)
				_putchar(tens);
			_putchar(ones);
		}
		_putchar('\n');
	}
}
