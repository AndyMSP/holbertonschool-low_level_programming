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
    int mid_index;

    if (size == 0)
        return (-1);
    if (value > array[size - 1])
        return (-1);

    mid_index = size / 2;

    if (array[mid_index] == value)
    {
        printf("==\n");
        print_array(array, size);
        return (mid_index);
    }
    else if (array[mid_index] > value)
    {
        printf(">\n");
        print_array(array, size);
        return (binary_search(array, mid_index, value));
    }
    else if (array[mid_index] < value)
    {
        printf("<\n");
        print_array(array, size);
        return (binary_search(array + mid_index + 1, size - mid_index - 1, value) + mid_index + 1);
    }
    else
    {
        printf("else\n");
        return (-1);
    }
}


/**
 * print_array - print formatted array
 * @array: pointer to int array
 * @size: size_t size of array
 * 
 * Return: no return value
 */
void print_array(int *array, size_t size)
{
    size_t i;

    printf("Searching in array: ");

    for (i = 0; i < size - 1; i++)
    {
        printf("%i, ", array[i]);
    }
    printf("%i", array[size - 1]);

    printf("\n");
}