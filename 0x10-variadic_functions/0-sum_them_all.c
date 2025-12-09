#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return sum of n inputs
 * @n: number of inputs to sum
 * @...: variable number of ints to be summed
 *
 * Return: int sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	unsigned int i;
	int arg, sum = 0;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, int);
		sum += arg;
	}

	return (sum);
}
