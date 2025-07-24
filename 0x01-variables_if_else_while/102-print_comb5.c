#include <stdio.h>

/**
 * main - print all combinations of 2 single digits without repeating
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int j = 1;
	int c1, c2, c3, c4;

	while (i <= 99)
	{
		j = 0;
		while (j <= 99)
		{
			if (j > i)
			{
				c1 = i / 10 + 48;
				c2 = i % 10 + 48;
				c3 = j / 10 + 48;
				c4 = j % 10 + 48;

				putchar(c1);
				putchar(c2);
				putchar(' ');
				putchar(c3);
				putchar(c4);
				if (!(i == 98 && j == 99))
				{
					putchar(',');
					putchar(' ');
				}

			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
