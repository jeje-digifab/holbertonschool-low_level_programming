#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Entry point.
 * @str: pointeur la phrase à copier.
 * Return: program that prints its name.
 */

char *_strdup(char *str)

{

	unsigned int i, len;
	char *buffer;

	len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	buffer = malloc((len + 1));
	if (!buffer)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		buffer[i] = str[i];
	}

	buffer[len] = '\0';

	return (buffer);

}
