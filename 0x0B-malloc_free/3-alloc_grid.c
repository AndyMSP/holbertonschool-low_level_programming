#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - generate a matrix with all 0's of type int
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to matrix
 */
int **alloc_grid(int width, int height)
{
	int **grid = NULL, i = 0, j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));
	if (!grid)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
