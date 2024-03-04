#include "main.h"

/**
 * _memset - Entry point.
 * @s: pointeur vers la mémoire à remplir.
 * @b: valeur constante à remplir.
 * @n: longueur de la zone mémoire à remplir.
 * Return: function that prints a sing, followed by a new line, to stdout.
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

		for (i = 0; i < n ; i++)
		{
			*s = b;
			s++;
		}

	return (s);
}
