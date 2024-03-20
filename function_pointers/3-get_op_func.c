#include "3-calc.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "string.h"

/**
 * get_op_func - Retrieves the function pointer associated with an operator
 * @s: The operator as a string (e.g., "+", "-", "*", "/", or "%")
 *
 * Description: This function searches for the operator in a predefined array
 *              of `op_t` structures and returns the corresponding function
 *              pointer if found. If the operator is not found, the function
 *              returns NULL.
 *
 * Return: Pointer to the function associated with the operator, or NULL if
 *         the operator is not found.
 */

int (*get_op_func(char *s))(int, int)

{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

while (ops[i].op != NULL && strcmp(ops[i].op, s) != 0)
{
	if (strcmp(ops[i].op, s) == 0)
	{
		return (ops[i].f);
	}
	i++;
}
return (ops[i].f);
}
