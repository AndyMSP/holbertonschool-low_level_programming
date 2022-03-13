#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints n numbers separated by a specified string
 * @separator: pointer to char
 * @n: number of numbers to print
 *
 * Return: No return value
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(ap, n);

	for (i = 0; i < n - 1; i++)
	{
		printf("%i%s", va_arg(ap, int), separator);
	}

	printf("%i\n", va_arg(ap, int));

	va_end(ap);
}
