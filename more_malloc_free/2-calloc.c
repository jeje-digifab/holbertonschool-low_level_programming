#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Entry point.
 * @nmemb: string.
 * @size: string.
 * Return: function that allocates memory using malloc.
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	char *buffer;

	buffer = malloc(nmemb * size);

	if (!buffer)
	{
		return (NULL);
	}

	else if ((nmemb || size) == 0)
	{
		return (NULL);
	}

	memset(buffer, 0, nmemb * size);

	return (buffer);
}
