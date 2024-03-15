#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _calloc - Entry point.
 * @nmemb: string.
 * @size: string.
 * Return: function that allocates memory using malloc.
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	char *buffer;
	unsigned int i;

	buffer = malloc(nmemb * size);

	if (!buffer || !nmemb || !size)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		((char *)buffer)[i] = 0;
	}

	return (buffer);
}

