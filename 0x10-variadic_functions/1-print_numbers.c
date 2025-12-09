#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print numbers with separators
 * @separator: string to use as separator
 * @n: number of ints to print
 * @...: list of ints to print
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int arg;

	if (!separator)
	{
		separator = "";
	}
	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);

	for (i = 0; i < n - 1; i++)
	{
		arg = va_arg(ap, int);
		printf("%d%s", arg, separator);
	}

	arg = va_arg(ap, int);
	printf("%d\n", arg);

	va_end(ap);
}
