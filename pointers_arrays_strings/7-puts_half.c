#include "main.h"

/**
 * puts_half - Entry point.
 * @str: variable.
 * Return: unction that prints half of a string.
 */

void puts_half(char *str)

{
	int length, st, i;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	length--;

	if (length % 2 == 0)
		{
		st = length / 2;
		}

	else
	{
		st = (length + 1) / 2;
	}

	for (i = st; i <= length; i++)
	{
		_putchar(str[i - 1]);
	}

	_putchar('\n');
}
