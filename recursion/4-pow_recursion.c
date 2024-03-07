#include "main.h"

/**
 * _pow_recursion - Entry point.
 * @y: number.
 * @x: number.
 * Return: unction that returns the value of x raised to the power of y.
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
