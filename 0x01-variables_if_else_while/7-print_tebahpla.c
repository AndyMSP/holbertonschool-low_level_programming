#include <stdio.h>

/**
 *main - print entire alphabet in lowercase
 *
 *Return: always return 0
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
		{
		putchar(letter);
		letter--;
		}
	printf("\n");
	return (0);
}
