#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free memory allocated by alloc_grid
 * @grid: 2d array to be freed
 * @height: number of rows in grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
