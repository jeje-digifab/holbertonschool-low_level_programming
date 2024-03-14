#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Entry point.
 * @b: pointeur la phrase à copier.
 * Return: function that allocates memory using malloc.
 */

void *malloc_checked(unsigned int b)

{
	char *buffer;

	buffer = malloc(b);

	if (!buffer)
	{
		exit(98);
		free(buffer);
	}

	else
	{
		return (buffer);
	}

return (0);
free(buffer);
}
