#include "main.h"

/**
 * print_last_digit - prints last digit of an integer
 * @n: an integer
 *
 * Return: Last digit of an integer
 */

int print_last_digit(int n)
{
	int last;

	last = _abs(n) % 10;
	_putchar (last + '0');
	return (last);
}

/**
 * _abs - returns absolute value of input argument
 * @n: any integer
 *
 * Return: absolute value of input
 */
int _abs(int n)
{
	if (n == 0)
		return (0);
	else if (n < 0)
		return (n * -1);
	else
		return (n);
}

