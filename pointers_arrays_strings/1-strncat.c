#include "main.h"
#include <complex.h>

/**
 * _strncat - concatenates two strings with a
 *				specified number of bytes from src
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of bytes from src to be used in the concatenation
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)



{
	int length, i;

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[length + i] = src[i];
	}

	return (dest);
}
