#include "main.h"
#include <stdio.h>

/**
 * factorial - find factorial recursively
 * @n: integer to find factorial of
 *
 * Return: int factorial
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
