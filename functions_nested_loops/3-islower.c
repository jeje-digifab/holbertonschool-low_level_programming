#include "main.h"
#include <unistd.h>

/**
 * _islower - entry point.
 * @c: fonction putchar.
 * Return: 0.
 */

int _islower(int c)

{

	if (c >= 97 && c <= 122)
	{
	return (1);
	}

	else
	{
	return (0);
	}

}
