#include "main.h"

/**
 * _strcat - Entry point.
 * @dest: variable.
 * @src: variable.
 * Return: function that prints a sing, followed by a new line, to stdout.
 */

char *_strcat(char *dest, char *src)

{
	int length, i;

	length = 0;
	i = 0;

	while (dest[length] != '\0')
	{
		length++;
	}

	for (; src[i] != 0; i++)
	{
		dest[length + i] = src[i];
	}


/*
	while (src[i] != '\0')
	{
		dest[length ] = src[i];
		length++;
		i++;
	}

*/

	dest[length + i] = '\0';

	return (dest);

}
