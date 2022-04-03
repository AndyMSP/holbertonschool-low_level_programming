#include "main.h"

/**
 * get_bit - gets bit at specific index of unsigned long int
 * @n: unsigned long int
 * @index: unsigned int
 *
 * Return: 1 if bit = 1, 0 if bit = 0, -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int size;
	unsigned long int trunc;

	size = 8 * sizeof(n);

	if (index >= size)
		return (-1);

	trunc = n >> index;

	bit = trunc & 1;

	return (bit);
}
