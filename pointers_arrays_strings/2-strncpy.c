#include "main.h"


/**
 * _strncpy - concatenates two strings with a
 *				specified number of bytes from src.
 * @dest: pointer to the destination string.
 * @src: pointer to the source string.
 * @n: maximum number of bytes from src to be used in the concatenation.
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)

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
		dest[length + i] = src[i - n];
	}

	return (dest);
}
