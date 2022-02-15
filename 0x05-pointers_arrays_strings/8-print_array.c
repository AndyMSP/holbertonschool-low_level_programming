#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array of integers
 * @a: pointer to first integer in array
 * @n: number of elements to be printed
 *
 * Return: No return value
 */

void print_array(int *a, int n)
{
	int i = 0;

	printf("%d", *a);

	for (i = 1; i < n; i++)
	{
		printf(", %d", *(a + i));
	}

	printf("\n");
}
