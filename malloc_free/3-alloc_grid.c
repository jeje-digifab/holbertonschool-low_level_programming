#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocates memory for a grid of integers.
 * @width: Width of the grid.
 * @height: Height of the grid.
 *
 * Return: A pointer to a 2D array, or NULL on failure.
 */

int **alloc_grid(int width, int height)

{
	int i, **array;

	height = 0;
	width = 0;


	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	array = malloc(height * sizeof(int *));

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		if ((array[i] = malloc(width * sizeof(int))) == NULL)
		{
			for (; i >= 0; --i)
			{
				free(array[i]);
			}
			free(array[i]);
			return (NULL);
		}
	}

	return (array);
}
