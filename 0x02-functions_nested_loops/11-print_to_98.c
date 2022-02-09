#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers from n to 98
 * @n: an integer
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
		}
	}
	if (n == 98)
		printf("98");


	printf("\n");
}
