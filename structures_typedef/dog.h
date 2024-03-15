#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - structure.
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
    
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);


#endif /* !DOG_H_ */
