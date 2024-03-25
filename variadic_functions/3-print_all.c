#include "variadic_functions.h"
#include <complex.h>
#include <stdarg.h>


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

void print_all(const char * const format, ...)
{
	va_list ap;
	int i, j = 0;

	char c;
	float f;
	char *s = NULL;

	va_start(ap, format);



	while (format[j] != '\0')
	{
		if (format[j] == 'c')
		{
			c = va_arg(ap, int);
			printf("%c, ", c);
		}
		else if (*format == 'i')
		{
			i = va_arg(ap, int);
			printf("%d, ", i);
		}
		else if (format[j] == 'f')
		{
			f = va_arg(ap, double);
			printf("%d, ", double);
		}
		else if (format[j] == 's')
		{
			if (va_arg(ap, char *) == NULL)
			{
				printf("(nil)\n");
			}

			s = va_arg(ap, char *);
			printf("%s", s);
		}
		i++;
	}

	printf("\n");
	va_end(ap);
}
