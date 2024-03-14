#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Entry point.
 * @b: pointeur la phrase à copier.
 * Return: function that allocates memory using malloc.
 */

void *malloc_checked(unsigned int b)

{
	char *buffer;

	buffer = malloc(sizeof(b));

	if (!buffer)
	{
		exit (98);
	}

	else
	{
	return (0);
	}


	/*
	int i;

	for (i = 0;  < b; i++)
	{
		return ;
	}
*/


}
