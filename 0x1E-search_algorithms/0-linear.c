#include "search_algos.h"

/**
 * linear_search - searches for a value in unordered array
 * @array: pointer to first element in int array to search
 * @size: size_t number of elements in array
 * @value: int value to search for
 * 
 * Return: int index where value is first found or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL)
        return (-1);
    
    for (i = 0; i < size; i++)
    {
        if (array[i] == value)
            return (i);
    }

    return (-1);
}