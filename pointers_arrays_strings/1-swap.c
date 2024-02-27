#include "main.h"

/**
 * swap_int - Entry point.
 * @a: variable.
 * @b: variable.
 * Return: function that takes a pointer to an int as parameter and updates
 *			the value it points to to 98.
 */

void swap_int(int *a, int *b)

{

	*a = *a + *b;

	*b = *a - *b;

	*a = *a - *b;


}
