#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - create an array of ints with all ints from min to max
 * @min: start of range
 * @max: end of range
 *
 * Return: pointer to new array or null on failure
 */
int *array_range(int min, int max)
{
	int *range, i, nmemb;

	/* check for bad inputs */
	if (min > max)
		return (NULL);

	nmemb = max - min + 1;

	range = malloc(nmemb * sizeof(int));
	if (!range)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		range[i] = min + i;
	}

	return (range);
}
