#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * @argc: pointeur la phrase à copier.
 * @argv: pointeur la phrase à copier.
 * Return: fprogram that prints its name.
 */

int main(int argc, char *argv[])

{
	int mul;


	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}

	else
	{
		printf("Error\n");
		return (1);
	}

}
