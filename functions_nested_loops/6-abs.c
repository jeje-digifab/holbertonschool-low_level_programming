#include "main.h"
#include <unistd.h>

/**
 * _abs - entry point.
 * @n: value of -abs.
 * Return: print value absolue of number
 *			print 0 if r is zero.
 */

int _abs(int n)

{

	if (n > 0)
	{
		return (n);
	}

	else if (n < '0')
	{
		return (- n);
	}

	else
	{
		return ('0');
	}

}
