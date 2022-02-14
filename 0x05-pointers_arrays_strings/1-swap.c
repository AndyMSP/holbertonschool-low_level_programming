#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: an integer
 * @b: an integer
 *
 * Return: No return value
 */

void swap_int(int *a, int *b)
{
	int A = *b;
	int B = *a;

	*a = A;
	*b = B;
}
