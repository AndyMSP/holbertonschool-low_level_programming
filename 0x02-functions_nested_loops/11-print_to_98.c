#include <stdio.h>

/**
 * print_to_98 - Print from n to 98 on stdout
 * @n: integer number to start with
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n != 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else if (n < 98)
	{
		while (n != 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	printf("98\n");
}