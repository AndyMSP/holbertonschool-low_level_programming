#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - allocate and initialize memory (all to zero)
 * @nmemb: number of members to allocate
 * @size: size in bytes of each member
 *
 * Return: pointer to new memory or null on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = malloc(nmemb * size);
	if (!mem)
		return (NULL);

	memset(mem, 0, nmemb * size);

	return (mem);
}
