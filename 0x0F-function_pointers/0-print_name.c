#include "function_pointers.h"

/**
 * print_name - prints a name using function pointers to functions
 * which print strings in different styles
 * @name: pointer to char
 * @f: pointer to function that returns void and takes pointer
 * to char as parameter
 *
 * Return: No return value
 */

void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
		exit(98);

	f(name);
}
