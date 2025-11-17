#include <stdio.h>
#include <stdlib.h>
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
	unsigned int i;
	char *mem = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = malloc(nmemb * size);
	if (!mem)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		mem[i] = 0;
	}

	return (mem);
}
