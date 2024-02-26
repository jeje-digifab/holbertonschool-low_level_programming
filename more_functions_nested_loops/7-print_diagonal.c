#include "main.h"

/**
* print_line - Entry point.
* @n: is the number of times the character _ should be printed
* Return: Returns number.
*/

void print_diagonal(int n)

{
	int i, j;

	if (n > 0)
	{
		for( i = 0; i < n; i++)
		{
			for( j = 0; j < n; j++)
			{
				if(j == i)
					_putchar('\\');
				else if (j < i )
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
