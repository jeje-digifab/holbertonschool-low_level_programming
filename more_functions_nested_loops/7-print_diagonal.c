#include "main.h"

/**
* print_diagonal - Entry point.
* @n: is n is the number of times the character \ should be printed.
* 			n is 0 or less, the function should only print a \n.
* Return: function that draws a diagonal line on the terminal.
*/

void print_diagonal(int n)

{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}

	else
	{
		_putchar('\n');
	}
}
