#include <stdio.h>

/**
 * main - print all combinations of 2 single digits without repeating
 *
 * Return: 0
 */
int main(void)
{
	char c1 = '0';
	char c2 = '1';

	while (c1 <= '9' || c2 <= '9')
	{
		while (c2 <= '9')
		{
			putchar(c1);
			putchar(c2);

			if (!(c1 == '8' && c2 == '9'))
			{
				putchar(',');
				putchar(' ');
			}
			c2++;
		}
		c1++;
		c2 = c1 + 1;

	}

	putchar('\n');

	return (0);
}
