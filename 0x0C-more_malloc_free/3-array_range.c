#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * array_range - creates array with all integer values from min to max
 * @min: integer to start array
 * @max: integer to end array
 *
 * Return: pointer to int array
 */

int *array_range(int min, int max)
{
	int i, len, *arr;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	arr = malloc(sizeof(int) * len);

	for (i = 0; i < len; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
