#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point.
 * @a: array.
 * @size: size of array.
 * Return: Returns the number of bytes in the initial segment of s which
 *			consist only of bytes from accept.
 */

void print_diagsums(int *a, int size)

{
	int i, j, sump, sums;

	sump = 0;
	sums = 0;
	j = size - 1;
	i = 0;

	for (; i <= (size * size); i = i + size + 1)
	{
		sump += a[i];
	}

	for (; j < (size * size - 1); j = j + size - 1)
	{
		sums += a[j];
	}

	printf("%d, %d\n", sump, sums);
	
}
