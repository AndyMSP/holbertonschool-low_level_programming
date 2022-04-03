#include "main.h"

/**
 * flip_bits - return number of non-matching bits
 * @n: unsigned long int
 * @m: unsigned long int
 *
 * Return: int number of non-matching bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int size, i;
	unsigned int count = 0;

	diff = n ^ m;

	size = 8 * sizeof(n);

	for (i = 0; i < size; i++)
	{
		if ((diff >> i) & 1)
			count++;
	}

	return (count);
}
