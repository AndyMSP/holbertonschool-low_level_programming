#include <stdio.h>
#include "main.h"

int prime_check(int num, int div);

/**
 * is_prime_number - determines if a number is a prime number
 * @n: an integer number
 *
 * Return: 1 if n is prime or 0 if n is not
 */

int is_prime_number(int n)
{
	return (prime_check(n, 2));
}

/**
 * prime_check - determines if a number is prime
 * @num: an integer to be checked for primeness
 * @div: an integer to divide num by
 *
 * Return: 1 if n is prime or 0 if not
 */

int prime_check(int num, int div)
{
	if (num < 2)
		return (0);
	if (div >= num)
		return (1);
	if ((num % div) == 0)
		return (0);

	return (prime_check(num, div + 1));
}
