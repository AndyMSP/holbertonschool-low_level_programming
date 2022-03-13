#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * variadic - example of variadic function and how to access arguments
 * @n: number of arguments that should follow
 *
 * Return: No return value 
 */
void variadic(int g, const unsigned int n, ...)
{
	va_list ap;
	(void)g;

	va_start(ap, n);

	printf("%i\n", va_arg(ap, int));
	printf("%i\n", va_arg(ap, int));
	printf("%i\n", va_arg(ap, int));
	printf("%i\n", va_arg(ap, int));
	printf("%i\n", va_arg(ap, int));
	printf("%i\n", va_arg(ap, int));
	printf("%i\n", va_arg(ap, int));
	printf("%i\n", va_arg(ap, int));
	printf("%i\n", va_arg(ap, int));
	printf("%i\n", va_arg(ap, int));

	va_end(ap);
}


/**
 * main - calls variadic function
 *
 * Return: Always 0.
 */
int main(void)
{
	variadic(7, 1, 2, "three", 4, 5);

	return (0);
}

