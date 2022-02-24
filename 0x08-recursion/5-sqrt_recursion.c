#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - finds the square root of a number
 * @n: an integer
 *
 * Return: The square root of n or -1 if n does not have an integer square root
 */

int root_check(int n, int num);

int _sqrt_recursion(int n)
{
	return (root_check(n, 1));
}

/**
 * root_check - finds the square root of a number
 * @square: integer to find the square root of
 * @root: integer to be checked if it's the square root of square
 *
 * Return: the square root or -1 if there no square root
 */

int root_check(int square, int root)
{
	if (square == (root * root))
	{
		return (root);
	}
	else if (root * root > square)
	{
		return (-1);
	}
	else
	{
		return (root_check(square, root + 1));
	}
}
