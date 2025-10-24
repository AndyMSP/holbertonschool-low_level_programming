#include <stdio.h>

/**
 * main - print 0123456789 without using char
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		putchar(i);
		i++;
	}

	putchar('\n');

	return (0);
}
