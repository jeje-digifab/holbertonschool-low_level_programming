#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Description: This function checks the number of arguments, retrieves the
 *              operator function using the get_op_func function, validates
 *              the operator, performs the operation with the given numbers,
 *              and prints the result. It handles errors such as invalid
 *              number of arguments, invalid operator, and division by zero.
 *
 * Return: 0 on success, 98 for invalid number of arguments, 99 for invalid
 *         operator, and 100 for division by zero.
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	result = op_func(num1, num2);

	if (result == -1)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", result);
	return (0);
}
