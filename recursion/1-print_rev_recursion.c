#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - Entry point.
 * @s: pointeur la phrase à copier.
 * Return: function that prints a string, followed by a new line.
 */

void _print_rev_recursion(char *s)

{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s - 1);
	putchar(*s);
}




