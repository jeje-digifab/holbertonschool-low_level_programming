#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_dog - Frees the memory allocated for a dog_t structure and its members.
 * @d: Pointer to the dog_t structure to be freed.
 *
 * Description: This function frees the memory allocated for a dog_t structure
 *              and its members, including the name and owner strings. It first
 *              checks if the pointer is not NULL, then frees the memory for
 *              each member and the structure itself using the free() function.
 *              Finally, it sets the pointer to NULL to indicate that it no
 *              longer points to a valid instance of dog_t. This helps to
 *              prevent use-after-free errors and other undefined behavior.
 */

void free_dog(dog_t *d)
{

	if (d != NULL)
	{
	free(d->name);
	free(d->owner);
	free(d);
	d = NULL;
	}
}
