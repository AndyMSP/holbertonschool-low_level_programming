#include "main.h"
#include <stdio.h>

/**
 * print_array - print an array of integers
 * @a: pointer to int
 * @n: number of integers to print
 *
 * Return: Void
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d\n", a[i]);
}
