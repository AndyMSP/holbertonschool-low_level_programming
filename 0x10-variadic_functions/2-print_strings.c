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

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	if (separator == NULL)
		separator = "";

	va_start(ap, n);

	for (i = 0; i < n - 1; i++)
	{
		printf("%s%s", va_arg(ap, char *), separator);
	}

	printf("%s\n", va_arg(ap, char *));

	va_end(ap);
}
