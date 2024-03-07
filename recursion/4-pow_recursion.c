#include "main.h"

/**
 * _pow_recursion - Entry point.
 * @y: number.
 * @x: number.
 * Return: If n is lower than 0, the function should return -1 to
 *			indicate an error.
 *			Factorial of 0 is 1
 */

int _pow_recursion(int x, int y)

{


	if (y < 0)
	{
		return (_pow_recursion(x, y + 1 / x));
	}

	else if (y == 0)
	{
		return (1);
	}

	return (_pow_recursion(x, y - 1) * x);
}
