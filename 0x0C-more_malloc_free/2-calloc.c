#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array of "nmemb" elements of size "size"
 * @nmemb: unsigned int representing number of elements in array
 * @size: size in bytes of each member
 *
 * Return: pointer to first element of new array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0, bytes = 0;
	char *arr;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	bytes = size * nmemb;

	arr = malloc(bytes);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < bytes; i++)
		arr[i] = 0;

	ptr = arr;

	return (ptr);
}
