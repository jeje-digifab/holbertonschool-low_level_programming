#include "main.h"

/**
 * _memset - Entry point.
 * @dest: pointeur vers la mémoire à remplir.
 * @src: valeur constante à remplir.
 * @n: longueur de la zone mémoire à remplir.
 * Return: function that prints a sing, followed by a new line, to stdout.
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i;

	if (n > 0)
	{
			for (i = 0; i < n ; i++)
			{
				dest[i] = src[i];
			}
	}
	return (dest);
}
