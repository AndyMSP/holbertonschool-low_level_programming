#include <stdio.h>

/**
 * main - print 0-9 with only putchar
 *
 * Return: 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
