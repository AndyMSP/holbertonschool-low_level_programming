#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - finds sum of n integers
 * @n: number of integers to sum
 *
 * Return: integer sum of arguments in va_list
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum;

	va_start(ap, n);

	for (i = 0, sum = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}

	return (sum);
}
