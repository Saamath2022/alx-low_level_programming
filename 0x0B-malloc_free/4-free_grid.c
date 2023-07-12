#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - free the grid
 * @grid: grid of memories
 * @height: int
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int y = 0;

	for (; y < height; y++)
		free(grid[y]);
	free(grid);
}
