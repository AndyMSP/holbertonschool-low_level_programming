#include "main.h"
#include <stdio.h>

/**
 * div_check - determines if any numbers smaller than n are divisors
 * @x: number to check
 * @y: number to divide by
 *
 * Return: 1 if it has divisors or 0 if not
 */
int div_check(int x, int y)
{
	if (y < 2)
		return (1);

	if (x % y == 0)
		return (0);

	return (div_check(x, y - 1));
}

/**
 * is_prime_number - determines if a number is prime
 * @n: int to be tested
 *
 * Return: 1 if prime or 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (div_check(n, n - 1));
}
