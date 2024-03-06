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
	int i, sump, sums;

	sump = 0;
	sums = 0;

	for (i = 0; i < size; i++)
	{

/*
		sump += *a[i][i];
		sums += *a[i][size - i - 1];
*/

		sump += a[i];

		sums += a[size - i - 1];


	}


	printf("%d", sump);

	printf("%d", sums);

	putchar('\n');

}
