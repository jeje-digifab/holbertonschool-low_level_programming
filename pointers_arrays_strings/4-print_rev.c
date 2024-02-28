#include "main.h"

/**
 * print_rev - Entry point.
 * @s: variable.
 * Return: function that prints a sing, followed by a new line, to stdout.
 */

void print_rev(char *s)

{
	int length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	length--;

	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}

	_putchar('\n');

}



