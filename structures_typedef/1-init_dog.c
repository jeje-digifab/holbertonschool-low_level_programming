#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: Pointer to the struct dog to initialize
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: This function initializes a struct dog with the given
 *              parameters and assigns them to the corresponding fields.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d == NULL)
	{
		return;
	}

	d->name = name;

	d->age = age;

	d->owner = owner;
}
