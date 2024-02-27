#include "main.h"
/**
 * puts2 - Entry point.
 * @str: variable.
 * Return: function that returns the length of a string.
 */

void puts2(char *str)

{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
