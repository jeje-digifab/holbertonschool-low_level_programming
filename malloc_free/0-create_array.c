#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Entry point.
 * @size: pointeur la phrase à copier.
 * @c: pointeur la phrase à copier.
 * Return: fprogram that prints its name.
 */

char *create_array(unsigned int size, char c)

{
	unsigned int i;
	char *buffer;

	if (size == 0)
	{
		return (NULL);
	}

	buffer = malloc(size * sizeof(char));
	if (!buffer)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		buffer[i] = c;
	}

	return (buffer);
}
