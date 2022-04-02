#include "main.h"

/**
 * binary_to_uint - converts string of 1's and 0's to integer
 * @b: pointer to char
 *
 * Return: integer value or 0 if invalid input
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, num = 0, i, n, m;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		m = len - 1 - i;
		n = b[i] - 48;

		num += n << m;
	}

	return (num);
}
