#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sums of the diagonals of matrices
 * @a: pointer to first element of matrix (0,0)
 * @size: length of array
 *
 * Return: No return value
 */

void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0;

	while (i < size)
	{
		sum1 += a[(size + 1) * i];
		sum2 += a[(size - 1) * (i + 1)];
		i++;
	}

	printf("%d, %d\n", sum1, sum2);
}
