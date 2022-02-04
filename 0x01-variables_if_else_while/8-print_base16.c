#include <stdio.h>

/**
 *main - print 0123456789abcdef to output
 *
 *Return: always return 0
 */
int main(void)
{
	int num = 48;
	char letter = 'a';

	while (num <= 48 + 9)
		{
		putchar(num);
		num++;
		}
	letter = 'a';
	while (letter <= 'f')
		{
		putchar(letter);
		letter++;
		}
	printf("\n");
	return (0);
}
