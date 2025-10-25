#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of an integer
 * @n: an integer
 *
 * Return: Value of the last digit of n
 */
int print_last_digit(int n)
{
	int absVal, d;

	d = n % 10;

	if (d >= 0)
		absVal = d;
	else
		absVal = -1 * d;

	_putchar(absVal + '0');
	return (absVal);
}
