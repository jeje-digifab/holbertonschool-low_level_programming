#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Description: This function prints a list of integers, separated by a
 * given string. If the separator is NULL, it is not printed. A new
 * line is printed at the end of the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list ap;
	int argument;
	unsigned int i;


	va_start(ap, n);

	if (n == 0)
	{
		printf("\n");
		return;
	}

	argument = va_arg(ap, int);
	printf("%d", argument);

	for (i = 1; i < n; i++)
	{
		if (separator !=  NULL)
		{
			printf("%s", separator);
		}
		argument = va_arg(ap, int);
		printf("%d", argument);
	}
	printf("\n");
	va_end(ap);
}
