#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print the diagonal sum of a square matrix
 * @a: pointer to int (actually a flattened array)
 * @size: length of an array's side
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0, sum2 = 0;

	for (i = 0, j = 0; i < size; i++)
	{
		sum1 += a[j];
		j += size + 1;
	}

	for (i = 0, j = size - 1; i < size; i++)
	{
		sum2 += a[j];
		j += size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
