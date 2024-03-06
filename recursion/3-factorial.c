#include "main.h"

/**
 * factorial - Entry point.
 * @n: number.
 * Return: If n is lower than 0, the function should return -1 to
 *			indicate an error.
 *			Factorial of 0 is 1
 */

int factorial(int n)

{
	if (n > 0)
	{
		return(n);
	}

	else if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}
/*
	else
	{
		return;
	}

*/
	return (0);
}
