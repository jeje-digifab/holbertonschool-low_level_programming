#include "main.h"


/**
 * more_numbers - Entry point.
 * Return: Prints 10 times the numbers, from 0 to 14.
 */

void more_numbers(void)

{
	int i, b;


	for (b = 0; b < 10; b++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}

			_putchar((i % 10) + '0');
		}
	_putchar('\n');
	}
}
