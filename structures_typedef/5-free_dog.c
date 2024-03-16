#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - creates a new dog structure with the given name, age, and owner
 * @name: the name of the dog (must be duplicated)
 * @age: the age of the dog
 * @owner: the owner of the dog (must be duplicated)
 *
 * Return: a pointer to the new dog structure, or NULL if the function fails
 *
 * This function creates a new dog structure and initializes its name, age,
 * and owner fields with the given values. The name and owner strings are
 * duplicated using malloc and strcpy, so the caller does not need to keep
 * the original strings around. If any memory allocation fails, the function
 * frees any previously allocated memory and returns NULL.
 */

void free_dog(dog_t *d)
{

	if (!d)
	{
		free_dog(d);
	}

	free(d);
}
