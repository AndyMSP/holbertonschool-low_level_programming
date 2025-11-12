#include "main.h"
#include <stdio.h>

/**
 * find_root - find root of y
 * @x: guess for root of y
 * @y: int to find root of
 *
 * Return: int root of y or -1 if no root
 */
int find_root(int x, int y)
{
	/**
	 * sqrt(y) = x if x*x = y
	 */

	int answer;

	if (x * x > y)
		return (-1);

	if (x * x == y)
		return (x);

	answer = find_root(x + 1, y);
	return (answer);
}

/**
 * _sqrt_recursion - find square root of a number using recursion
 * @n: int to find square root of
 *
 * Return: int square root of n or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);

	return (find_root(0, n));
}
