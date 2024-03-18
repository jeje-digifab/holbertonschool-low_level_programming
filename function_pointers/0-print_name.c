#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - prints a name using a given function pointer
 * @name: the name to be printed
 * @f: a pointer to a function that takes a string argument and returns void
 *
 * Description: This function takes a name and a function pointer as arguments,
 *              and calls the function pointed to by `f` with `name` as its
 *              argument. This allows the name to be printed in different ways
 *              depending on the function pointed to by `f`. If `f` is NULL,
 *              the function does nothing.
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))

{
	if (f != NULL)
	{
		(*f)(name);
	}
}
