#include "main.h"
#include <stdio.h>

int find_root(int x, int y)
{
	if (x > y)
		return (-1);

	if (x * x == y)
		return (x);

	return (find_root(x + 1, y));
}

/**
 * _sqrt_recursion - find square root of a number using recursion
 * @n: int to find square root of
 *
 * Return: int square root of n or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
	/**
	 * sqrt(n) = x if x*x = n
	 */
	if (n == 0)
		return (0);

	if (n == 1)
		return (1);

	if (n < 0)
		return (-1);

	return (find_root(0, n));
}
