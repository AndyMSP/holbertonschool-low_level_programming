#include <stdio.h>

/**
 *main - print entire alphabet in lowercase
 *
 *Return: always return 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
		{
		putchar(letter);
		letter++;
		}
	letter = 'A';
	while (letter <= 'Z')
		{
		putchar(letter);
		letter++;
		}
	printf("\n");
	return (0);
}
