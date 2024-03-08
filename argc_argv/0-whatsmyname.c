#include <stdio.h>

/**
 * main - Entry point.
 * @argc: pointeur la phrase à copier.
 * @argv: pointeur la phrase à copier.
 * Return: fprogram that prints its name.
 */

int main(int argc, char *argv[])

{

	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
