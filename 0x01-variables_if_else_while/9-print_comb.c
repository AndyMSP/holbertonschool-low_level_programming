#include <stdio.h>

/**
 * main - print every combination of single digit numbers
 *
 * Return: 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);

		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}

		c++;
	}

	putchar ('\n');

	return (0);
}
