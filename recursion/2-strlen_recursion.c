#include "main.h"

/**
 * _strlen_recursion - Entry point.
 * @s: pointeur la phrase à copier.
 * Return: function that returns the length of a string.
 */

int _strlen_recursion(char *s)

{
	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
