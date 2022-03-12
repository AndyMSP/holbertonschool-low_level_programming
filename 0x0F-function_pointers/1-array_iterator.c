#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element in an array
 * @array: pointer to integer array
 * @size: number of elements in the array
 * @action: pointer to function that takes int as parameter and returns nothing
 *
 * Return: No return value
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || action == NULL)
		exit(98);

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
