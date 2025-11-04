#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse the elements of an array of size n
 * @a: array of ints
 * @n: integer number of elements in a
 *
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int *start, *end, tmp;

	start = a;
	end = a + n - 1;

	while (start < end)
	{
		tmp = *start;
		*start = *end;
		*end = tmp;

		start++;
		end--;
	}
}
