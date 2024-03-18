#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as a parameter on
 *					each element of an array
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @action: pointer to the function to be executed on each element
 *
 * Description: This function iterates over each element of the array and
 *              executes the function pointed to by `action` on that element.
 *              If `array` or `action` is NULL, the function does nothing.
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))

{
	size_t i;

	if (action != NULL && array != NULL)
	{

		for (i = 0;  i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
