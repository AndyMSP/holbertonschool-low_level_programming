#include <stdio.h>

/**
 * main - print all combinations of 2 single digits without repeating
 *
 * Return: 0
 */
int main(void)
{
	int c1 = 48;
	int c2 = c1 + 1;
	int c3 = c2 + 1;

	while (c1 <= '9' || c2 <= '9' || c3 <= '9')
	{
		while (c2 <= '9' || c3 <= '9')
		{
			while (c3 <= '9')
			{
				putchar(c1);
				putchar(c2);
				putchar(c3);

				if (!(c1 == '7' && c2 == '8' && c3 == '9'))
				{
					putchar(',');
					putchar(' ');
				}
				c3++;
			}
			c2++;
		}
		c1++;
		c2 = c1 + 1;
		c3 = c2 + 1;

	}

	putchar('\n');

	return (0);
}
