#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - finds index of array where a match is made
 * @array: an array of integers
 * @size: number of elements in array
 * @cmp: pointer to function that takes an int as an argument and
 * returns and int
 *
 * Return: an integer representing the element in array where match is found
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);

		i++;
	}

	return (-1);
}
