#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints a list of strings separated by a given separator
 * @separator: the string to be printed between the strings
 * @n: the number of strings to be printed
 *
 * Description: This function prints a list of strings separated by a given
 *              separator. If the separator is NULL, it is not printed. If
 *              one of the strings is NULL, "(nil)" is printed instead. A new
 *              line is printed at the end of the function.
 *
 * Note: This function uses the va_start, va_arg, and va_end macros to handle
 *       variable arguments. The va_list type is used to store the list of
 *       arguments. The first argument after the format string is the number
 *       of strings to be printed, followed by the strings themselves.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *argument;
	unsigned int i;

	va_start(ap, n);

	if (n == 0)
	{
		return;
	}

	for (i = 0; i < n; i++)
	{
		argument = va_arg(ap, char*);

		if (argument ==  NULL)
		{
			printf("(nil)\n");
		}

		else
		{
			printf("%s", argument);
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(ap);
}
