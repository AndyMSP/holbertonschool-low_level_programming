#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees memory allocated for a 2d array
 * @grid: pointer to pointer to integer
 * @height: number of inner array elements
 *
 * Return: No return value
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
