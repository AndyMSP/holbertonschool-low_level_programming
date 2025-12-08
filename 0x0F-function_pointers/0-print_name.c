#include "function_pointers.h"

/**
 * print_name - Print a name in format specified by callback function
 * @name: string to be printed
 * @f: pointer to function that takes a string
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
