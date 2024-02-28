#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry point.
 * @a: variable.
 * @n: variable.
 * Return: function that returns the length of a string.
 */

void print_array(int *a, int n)

{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
			if (i < n - 1)
			{
				printf(", ");
			}

	}

	printf("\n");

}
