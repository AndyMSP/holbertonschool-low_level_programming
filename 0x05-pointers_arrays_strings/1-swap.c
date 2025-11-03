#include "main.h"

/**
 * swap_int - Swap the value of two integers
 * @a: an integer
 * @b: an integer
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int aa, bb;

	aa = *a;
	bb = *b;

	*a = bb;
	*b = aa;
}
