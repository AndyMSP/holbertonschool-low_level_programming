#include <stdio.h>

/**
 *main - print 0123456789abcdef to output
 *
 *Return: always return 0
 */
int main(void)
{
	int num = 48;

	while (num <= 48 + 8)
		{
		putchar(num);
		putchar(',');
		num++;
		}
	putchar(57);
	putchar('\n');
	return (0);
}
