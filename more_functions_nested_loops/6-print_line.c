#include "main.h"

/**
* print_line - Entry point.
* @n: is the number of times the character _ should be printed
* Return: Returns number.
*/

void print_line(int n)

{
	int i;



	for (i = 0 ; i < n; i++)
	{
		if (n > 0)
		{
		_putchar('_');
		}

	}

		_putchar('\n');
}


