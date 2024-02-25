#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - entry point.
 * @n: value of number.
 * Return: print value until 98
 */

void print_to_98(int n)


{

	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);

			if (n < 98)
			{
			putchar(',');
			putchar(' ');
			}
			n++;
		}
		printf("\n");

	}

	else
	{

		while (n > 98)
		{
			printf("%d", n);

			if (n >= 98)
			{
			putchar(',');
			putchar(' ');
			}
			n--;
		}
		printf("\n");
	}

}
