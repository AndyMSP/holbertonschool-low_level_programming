#include "main.h"

/**
 * print_last_digit - Prints the last digit of an integer
 * @n: an integer
 *
 * Return: Value of the last digit of n
 */
int print_last_digit(int n)
{
	/* int absVal;
	 *if (n >= 0)
	 *	absVal = n;
	 *else
	 *	absVal = -1 * n;
	 *return (absVal); */

	int d;

	d = _abs(n) % 10;

	_putchar(d + '0');
	return (d);
}
