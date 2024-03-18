#ifndef FONCTION_POINTERS_H_
#define FONCTION_POINTERS_H_

/**
 * struct dog - structure.
 * @name: un pointeur vers une chaîne de caractères
 *			représentant le nom du chien.
 * @age: un nombre à virgule flottante
 *			représentant l'âge du chien.
 * @owner: un pointeur vers une chaîne de caractères
 *			représentant le nom du propriétaire du chien.
 */

int _putchar(char c);
void print_name(char *name, void (*f)(char *));


#endif /* !FONCTION_POINTERS_H_ */
