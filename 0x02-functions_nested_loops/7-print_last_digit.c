#include "main.h"

/**
 * print_last_digit - Prints the last digit of an integer
 * @n: an integer
 *
 * Return: Value of the last digit of n
 */
int print_last_digit(int n)
{
	long int absVal, d;

	if (n >= 0)
		absVal = n;
	else
		absVal = -1 * n;

	d = absVal % 10;

	_putchar(d + '0');
	return (d);
}
