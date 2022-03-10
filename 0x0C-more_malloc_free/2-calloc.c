#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	unsigned int bytes = 0;
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	bytes = size * nmemb;

	arr = malloc(bytes);
	if (arr == NULL)
		return (NULL);

	memset(arr, 0, bytes);

	return (arr);
}
