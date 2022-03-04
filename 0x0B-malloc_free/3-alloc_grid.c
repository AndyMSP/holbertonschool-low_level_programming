#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: integer width
 * @height: integer height
 *
 * Return: NULL on failure or pointer to 2D array
 */

int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	ptr = malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}

	return (ptr);
}
