#include <stdio.h>

/**
 *main - print 0123456789abcdef to output
 *
 *Return: always return 0
 */
int main(void)
{
	int num = 48;

	while (num <= 48 + 9)
	{
	putchar(num);
	if (num != 48 + 9)
		{
		putchar(',');
		putchar(' ');
		}
	num++;
	}
	putchar('\n');
	return (0);
}
