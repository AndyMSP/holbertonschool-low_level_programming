#include "search_algos.h"

/**
 * binary_search - searches for a value in array using binary search
 * @array: pointer to int array
 * @size: size_t size of array
 * @value: int value to search for
 *
 * Return: int index where value was found or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{

	int low_idx, high_idx;

	low_idx = 0;
	high_idx = size - 1;

	return (rec_bin_search(array, low_idx, high_idx, value));

}


/**
 * rec_bin_search - searches for a value in a sorted array
 * @array: pointer to int array
 * @low_idx: int first index of sub-array
 * @high_idx: int last index of sub-array
 * @value: int value we are searching for
 *
 * Return: int index where value is found or -1 if not found
 */
int rec_bin_search(int *array, int low_idx, int high_idx, int value)
{

	int mid_idx;

	mid_idx = low_idx + (high_idx - low_idx) / 2;
	if (low_idx > high_idx)
		return (-1);

	print_array(array, low_idx, high_idx);

	if (value == array[mid_idx])
		return (mid_idx);
	else if (value < array[mid_idx])
	{
		return (rec_bin_search(array, low_idx, mid_idx - 1, value));
	}
	else if (value > array[mid_idx])
	{
		return (rec_bin_search(array, mid_idx + 1, high_idx, value));
	}
	else
	{
		return (-1);
	}
}


/**
 * print_array - print formatted array
 * @array: pointer to int array
 * @low_idx: int first index of sub-array
 * @high_idx: int last index of sub-array
 *
 * Return: no return value
 */
void print_array(int *array, int low_idx, int high_idx)
{
	int i;

	printf("Searching in array: ");

	for (i = low_idx; i < high_idx; i++)
	{
		printf("%i, ", array[i]);
	}
	printf("%i", array[high_idx]);

	printf("\n");
}
