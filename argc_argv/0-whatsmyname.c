#include "main.h"
#include <stdio.h>

/**
 * main - Entry point.
 * @argc: pointeur la phrase à copier.
 * @argv: pointeur la phrase à copier.
 * Return: function that prints a string, followed by a new line.
 */

void main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s ", argv[i]);
	}
	printf("\n");
}
