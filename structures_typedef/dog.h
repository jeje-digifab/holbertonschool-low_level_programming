#ifndef DOG_H_
#define DOG_H_

/**
 * dog - structure.
 * @name: un pointeur vers une chaîne de caractères
 *			représentant le nom du chien.
 * @age: un nombre à virgule flottante
 *			représentant l'âge du chien.
 * @owner: un pointeur vers une chaîne de caractères
 *			représentant le nom du propriétaire du chien.
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* !DOG_H_ */
