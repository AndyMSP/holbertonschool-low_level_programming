#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - print char recieved from va_list
 * @ap: va_list
 *
 * Return: void
 */
void print_char(va_list ap)
{
	char val;

	val = (char)va_arg(ap, int);
	printf("%c", val);
}

/**
 * print_int - print int recieved from va_list
 * @ap: va_list
 *
 * Return: void
 */
void print_int(va_list ap)
{
	int val;

	val = (int)va_arg(ap, int);
	printf("%d", val);
}

/**
 * print_float - print float recieved from va_list
 * @ap: va_list
 *
 * Return: void
 */
void print_float(va_list ap)
{
	float val;

	val = (float)va_arg(ap, double);
	printf("%f", val);
}

/**
 * print_string - print string recieved from va_list
 * @ap: va_list
 *
 * Return: void
 */
void print_string(va_list ap)
{
	char *val;

	val = (char *)(va_arg(ap, char *));

	if (val == NULL)
	{
		val = "(nil)";
	}

	printf("%s", val);
}

/**
 * print_all - print arguments according to format string
 * @format: string representing what each argument is
 * @...: list of arguments to print
 *
 * Return: void
 */
void print_all(const char *const format, ...)
{
	int i = 0, j = 0, printed;
	char c;
	va_list ap;

	va_start(ap, format);
	i = 0;

	if (!format)
		return;
	while (format[i])
	{
		printed = 0;
		switch (format[i])
		{
		case 'c':
			print_char(ap);
			printed = 1;
			break;
		case 'i':
			print_int(ap);
			printed = 1;
			break;
		case 'f':
			print_float(ap);
			printed = 1;
			break;
		case 's':
			print_string(ap);
			printed = 1;
			break;
		}
		i++;
		j = i;
		c = format[j];
		while (c)
		{
			if (printed && (c == 'c' || c == 'i' || c == 'f' || c == 's'))
				printf(", ");
			j++;
			c = format[j];
		}
	}
	printf("\n");
}
