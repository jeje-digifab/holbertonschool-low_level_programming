#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 *
 * @n: the number of arguments to be passed.
 * @...: variable number of arguments to be summed.
 *
 * Return: the sum of all arguments. If n is 0, return 0.
 */

int sum_them_all(const unsigned int n, ...)

{
	int val = 0;
	va_list ap;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		val += va_arg(ap, int);
	}
	va_end(ap);

	return (val);
}
