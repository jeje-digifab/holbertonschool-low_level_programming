#include <stdio.h>

/**
 * main - Entry point.
 * @argc: pointeur la phrase à copier.
 * @argv: pointeur la phrase à copier.
 * Return: fprogram that prints its name.
 */

int main(int argc, char *argv[])

{

	argv[0] = "";

	if (argc == 1)
	{
		printf("0\n");
	}

	else
	{
		printf("%d\n", argc -1);
	}

	return (0);
}
