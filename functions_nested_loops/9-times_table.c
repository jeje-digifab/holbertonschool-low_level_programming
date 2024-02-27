#include "main.h"
#include <unistd.h>

/**
 * times_table - entry point.
 * Return: print value absolue of number
 *			print 0 if r is zero.
 */

void times_table(void)

{

	int x, y;

	for (x = '0'; x <= '9'; x++)
	{

		for (y = '0'; y <= '9'; y++)
		{
			_putchar(y);
		if (x < '9')
		{
			_putchar(',');
			_putchar(' ');

		}

		}


			_putchar('\n');


	}
}
