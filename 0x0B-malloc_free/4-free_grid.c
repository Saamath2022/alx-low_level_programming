#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * free_grid - write a function that frees 2D grid created by our alloc_grid
 * @grid: The 2d grid to be freed
 * @height: the height of the grid.
 * This function frees the memory alloctd for 2d.
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
