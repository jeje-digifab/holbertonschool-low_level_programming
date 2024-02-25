#include "main.h"
#include <unistd.h>

/**
 * print_last_digit - entry point.
 * @n: value of digit.
 * Return: Returns the value of the last digit.
 */

int print_last_digit(int n)


{


	n = n % 10;



	if (n < 0)
	{
		n *= -1;
	}

	_putchar(n + '0');

	return (n);

}
