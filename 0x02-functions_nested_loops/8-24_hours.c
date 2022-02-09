#include "main.h"

/**
 * jack_bauer - Print every minute of a day in for xx:xx
 *
 * Return: No return value
 */
void jack_bauer(void)
{
	int _1;
	int _2;
	int _3;
	int _4;

	for (_1 = 0; _1 < 3; _1++)
	{
		for (_2 = 0; _2 < 10; _2++)
		{
			for (_3 = 0; _3 < 6; _3++)
			{
				for (_4 = 0; _4 < 10; _4++)
				{
					if (!(_1 == 2 && _2 > 3))
					{
						_putchar('0' + _1);
						_putchar('0' + _2);
						_putchar(':');
						_putchar('0' + _3);
						_putchar('0' + _4);
						_putchar('\n');
					}
				}
			}
		}
	}
}
