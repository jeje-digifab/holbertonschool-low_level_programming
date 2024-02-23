#include "main.h"
#include <unistd.h>

/**
 * _isalpha - entry point.
 * @c: fonction putchar.
 * Return: 0 otherwise.
 *			1 is a letter, lowercase or uppercase.
 */

int _isalpha(int c)

{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}

	else
	{
	return (0);
	}

}
