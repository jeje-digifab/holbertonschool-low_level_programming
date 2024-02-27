#include "main.h"

/**
 * print_triangle - Entry point.
 * @size : is the number of times the character _ should be printed
 * Return: If size is 0 or less, the function should
 *			print only a new line.
 */

void print_triangle(int size)

{
	int i, j;

    for( i = 0; i < size; i++)
    {
        for( j = 0; j < size; j++)
        {
            if(i == j)
                _putchar('#');
            else
                _putchar(' ');
        }
        _putchar('\n');
    }

}
