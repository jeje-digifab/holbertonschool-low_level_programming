#include "main.h"


/**
 * reverse_array - function that reverses the content of an array
 * @a: pointer to the destination string
 * @n: maximum number of bytes from src to be used in the concatenation.
 *
 * Return: function that reverses the content of an array of integers.
 */

void reverse_array(int *a, int n)


{
	int i = 0;
	int j = n - 1;
	int temp;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
