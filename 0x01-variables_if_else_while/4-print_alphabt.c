#include <stdio.h>

/**
 * main - print alphabet without 'e' and 'q'
 *
 * Return: Always 0
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
