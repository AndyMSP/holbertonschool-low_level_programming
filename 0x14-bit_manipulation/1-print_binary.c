#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: unsigned long int
 *
 * Return: no return value
 */
void print_binary(unsigned long int n)
{
	unsigned long int bit, size;
	int right_shift;

	size = 8 * sizeof(n);
	right_shift = size - 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (right_shift >= 0)
	{
		bit = (n >> right_shift) & 1;
		right_shift -= 1;
		if (bit == 1)
		{
			_putchar('0' + bit);
			break;
		}
	}

	while (right_shift >= 0)
	{
		bit = (n >> right_shift) & 1;
		right_shift -= 1;
		_putchar('0' + bit);
	}
}
