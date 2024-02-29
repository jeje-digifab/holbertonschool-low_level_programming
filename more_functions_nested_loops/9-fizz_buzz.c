#include "main.h"
#include <stdio.h>


/**
 * main - Entry point.
 * Return: But for multiples of three print Fizz instead of the number and for
 *	the multiples of five print Buzz. For numbers which are multiples of both
 *	three and five print FizzBuzz.
 */

int main(void)

{
	int i;
		for (i = 1; i <= 100; i++)
		{
			if (i % 15 == 0)
			{
				printf("FizzBuzz");
				putchar(' ');
			}
			else if (i % 5 == 0)
			{
				printf("Buzz");
				putchar(' ');
			}
			else if (i % 3 == 0)
			{
				printf("Fizz");
				putchar(' ');
			}

			else
			{
				if (i > 9)
				{
					putchar((i / 10) + '0');
				}

				putchar((i % 10) + '0');
				putchar(' ');
			}

		}
		putchar('\n');
		return (0);
}
