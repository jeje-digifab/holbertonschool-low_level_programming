#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * array_range - Entry point.
 * @min: string.
 * @max: string.
 * Return: function that allocates memory using malloc.
 */

int *array_range(int min, int max)

{
	int *array;
	int i;



	if (min > max)
	{
		return (NULL);
	}
	array = malloc((max - min + 1) * sizeof(int*));

	if (!array)
	{
		return (NULL);
	}

	for (i = min ; i <= max ; i++)
	{
		array[i] = min + i;
	}

	return (array);
}

