#include "main.h"
#include <unistd.h>

/**
 * int _islower(int c) - entry point.
 * @c: fonction putchar
 * Return: 0.
 */

int _islower(int c)

{

	if (c >= 97 && c <= 122 )
/*	if (c >= 'a' && c <= 'z' ) */
	{
		_putchar(49);
	}

	else if (c >= 'A' && c <= 'Z' )
	{
		_putchar(48);
	}

	return (0);
}


