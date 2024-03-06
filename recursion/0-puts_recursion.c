#include "main.h"

/**
 * _memset - Entry point.
 * @s: pointeur vers la mémoire à remplir.
 * @b: valeur constante à remplir.
 * @n: longueur de la zone mémoire à remplir.
 * Return: function that prints a sing, followed by a new line, to stdout.
 */

void _puts_recursion(char *s)

{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
	{
		_putchar('\n');
	}
}
