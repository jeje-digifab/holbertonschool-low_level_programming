#include "main.h"
#include <unistd.h>

/**
 * _isalpha - entry point.
 * @c: fonction putchar.
 * Return: 0 is Upper.
 * Return: 1 is Lower.
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
