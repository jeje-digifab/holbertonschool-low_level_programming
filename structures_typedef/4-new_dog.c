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

dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0, k, l;
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
	{
		return (NULL);
	}
	while (name[i] != '\0')
	{
		i++;
	}
	while (owner[j] != '\0')
	{
		j++;
	}
	new_dog->name = malloc(i * sizeof(char) + 1);
	if (!new_dog->name)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(j * sizeof(char) + 1);
	if (!new_dog->owner)
	{
		free(new_dog);
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		new_dog->name[k] = name[k];
	}
	new_dog->name[k] = '\0';
	for (l = 0; l < j; l++)
	{
		new_dog->owner[l] = owner[l];
	}
	new_dog->owner[l] = '\0';
	new_dog->age = age;
	return (new_dog);
}
