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
	int i = 0, j = 0;
	va_list ap;

	code_t picker[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}};

	va_start(ap, format);
	/* Cycle through arguments */
	i = 0;
	while (format[i])
	{
		/* print a single argument */
		j = 0;
		while (j < 4)
		{
			if (picker[j].c == format[i])
			{
				picker[j].f(ap);
				if (format[i + 1])
					printf(", ");
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
}
