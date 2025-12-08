#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - perform action on each element of an array
 * @array: array of integers
 * @size_t: size of array
 * @action: function pointer to function to apply to each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
