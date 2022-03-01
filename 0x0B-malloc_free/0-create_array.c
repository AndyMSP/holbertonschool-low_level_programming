#include "stdlib.h"
#include "main.h"

/**
 * create_array - creates an array of chars and initializes it
 * @size: integer number of elements in array
 * @c: character to initialize elements of array with
 *
 * Return: NULL if size is 0 or failure occurs, pointer to array if succesful
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (0);

	arr = malloc(sizeof(*arr) * size);

	if (arr == 0)
		return (0);

	for (i = 0; i < size; ++i)
	{
		arr[i] = c;
	}

	return (arr);
}
