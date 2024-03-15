#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - Prints information about a dog.
 * @d: Pointer to a struct dog containing the dog's information.
 *
 * Description: This function prints the name, age, and owner of a dog
 *              in the format specified below. If any of the fields are
 *              NULL, "(nil)" is printed instead of the field's value.
 *
 * Format:
 * Name: <name of dog>
 * Age: <age of dog>
 * Owner: <name of owner>
 *
 * Note: This function does not return a value.
 */

void print_dog(struct dog *d)

{

	if (!d)
	{
		return;
	}


	if (!d->name)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	if (!d->age)
	{
		printf("Age: (nil)\n");
	}
	else if ((d->age) == 0.0)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}

	if (!d->owner)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}

}
