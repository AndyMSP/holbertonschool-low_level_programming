#include "main.h"

/**
 * clear_bit - clear bit at specified index
 * @n: pointer to unsigned long int
 * @index: unsigned int
 *
 * Return: 1 if success and -1 if failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= 8 * sizeof(*n))
		return (-1);

	mask = ~(1 << index);

	*n = *n & mask;

	return (1);
}
