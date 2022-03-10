#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - Returns a pointer to newly allocated memory or upon
 * if malloc fails cause normal process termination with a status value
 * of 98
 * @b: an unsigned int
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
