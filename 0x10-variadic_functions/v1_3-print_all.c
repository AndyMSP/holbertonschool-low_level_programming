#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct op
{
	char type;
	void (*f)(void *);
} op_print;

/**
 * print_char - prints a character
 * @ptr: void pointer to assumed char
 *
 * Return: No return value
 */
void print_char(void *ptr)
{
	char c;

	c = *(char *)ptr;

	printf("%c", c);
}


/**
 * print_int - prints an int
 * @ptr: void pointer to assumed int
 *
 * Return: No return value
 */
void print_int(void *ptr)
{
	int i;

	i = *(int *)ptr;

	printf("%i", i);
}


/**
 * print_float - prints a float
 * @ptr: void pointer to assumed float
 *
 * Return: No return value
 */
void print_float(void *ptr)
{
	float f;

	f = *(float *)ptr;

	printf("%f", f);
}


/**
 * print_string - prints a string
 * @ptr: void pointer to assumed string
 *
 * Return: No return value
 */
void print_string(void *ptr)
{
	char *str;

	str = (char *)ptr;

	printf("%s", str);
}


/**
 * get_print_op - determine print operation to use
 * @sym: a char determining type of variable to print
 *
 * Return: pointer to appropriate print function
 */
void (*get_print_op(char sym))(void *)
{

	int i = 0;

	op_print printer[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};

	while (i < 4)
	{
		if(printer[i].type == sym)
			return (printer[i].f);

		i++;
	}

	return (0);
}


/**
 * print_all - prints formatted text
 * @format: string giving formats for printing
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i;
	void *ptr;

	va_start(ap, format)

	for (i = 0; i < strlen(format); i++)
	{
		operation = get_print_op(format[i]);
	}

	va_end(ap);
}
