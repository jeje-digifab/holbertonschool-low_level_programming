#include "main.h"

/**
* more_numbers - Entry point.
* Return: Returns number.
*/

void more_numbers(void)

{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}


	for (i = '0'; i <= '4'; i++)
	{
		_putchar('1');
		_putchar(i);
	}

		_putchar('\n');
}


