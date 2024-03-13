#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Allocates memory for a grid of integers.
 * @grid: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: A pointer to a 2D array, or NULL on failure.
 */

void free_grid(int **grid, int height)

{
	int i;
	for (i = 0; i < height; ++i)
	{
		free(grid[i]);
	}
	free(grid);
}
