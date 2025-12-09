#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings with separators
 * @separator: string to use as separator
 * @n: number of strings to print
 * @...: list of strings to print
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *arg;

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
		arg = va_arg(ap, char *);
		if (arg == NULL)
		{
			arg = "(nil)";
		}
		printf("%s%s", arg, separator);
	}

	arg = va_arg(ap, char *);
	if (arg == NULL)
	{
		arg = "(nil)";
	}
	printf("%s\n", arg);

	va_end(ap);
}
