#include <stdlib.h>

/**
 * free_grid - Allocates memory for a grid of integers.
 * @grid: grid.
 * @height: Height of the grid.
 *
 * Return: function that frees a 2 dimensional grid
 *			previously created by your alloc_grid function.
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
