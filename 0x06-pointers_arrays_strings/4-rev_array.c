#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses an array of integers
 * @a: pointer to array of integers
 * @n: size of a
 *
 * Return: No return value
 */

void reverse_array(int *a, int n)
{
	int beg;
	int end;
	int i = 0;

	while (i <= n / 2)
	{
		beg = a[i];
		end = a[n - i - 1];
		a[i] = end;
		a[n - i - 1] = beg;
/*
 *		printf("n = %d,   i = %d,   beg = %d,   end = %d\n", n, i, beg, end);
*/
		i++;
	}
}
