#include "calc.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])

{
	if (argc != 4)
	{
		printf("Entrez un nombre d'arguments valide: %s \n", argv[0]);
		return (1);
	}
	int num1 = atoi(argv[1]);
	char operation = argv[2][0];
	int num2 = atoi(argv[3]);

	for (int i = 0; ops[i].op == operation)
	{
		int result = ops[i].func(num1, num2);
		printf("results: %d \n", result);
		return (0);
	}

}
