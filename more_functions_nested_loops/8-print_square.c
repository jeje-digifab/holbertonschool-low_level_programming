#include "main.h"

/**
* print_line - Entry point.
* @size : is the number of times the character _ should be printed
* Return: If size is 0 or less, the function should
 *			print only a new line.
*/

void print_square(int size)

{
	int i, j;


	i = 0;



	while (i < size)
	{



		for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
				_putchar('\n');
				i++;

	}

		_putchar('\n');
}


