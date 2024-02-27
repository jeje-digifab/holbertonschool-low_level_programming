#include "main.h"
#include <stdio.h>


/**
* more_numbers - Entry point.
* Return: Prints 10 times the numbers, from 0 to 14.
*/

int main(void)

{
	int i;



		for ( i = 1; i <= 100; i++)
		{
			if (i <= 9)
			{
				putchar(i + '0');
				putchar(' ');
			}

			else if (i > 9 && i < 100)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
			}

			else
			{
				putchar((i / 100) + '0');
				putchar((i % 10) + '0');
				putchar((i % 10) + '0');
			}

			if (i % 15 == 0)
			{
				printf("FizzBuzz");
			}

			else if (i % 5 == 0)
			{

				printf("Buzz");
			}

			else if (i % 3 == 0)
			{
				printf("Fizz");
			}

		}
		putchar('\n');
		return (0);
}
