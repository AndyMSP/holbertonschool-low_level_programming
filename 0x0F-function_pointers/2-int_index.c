#include "function_pointers.h"

/**
 * int_index - search array for value meeting some criteria
 * @array: array to be searched
 * @size: size of array
 * @cmp: pointer to function that checks for criteria of element
 *
 * Return: int index of first element to meet criteria or -1 for none met
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
