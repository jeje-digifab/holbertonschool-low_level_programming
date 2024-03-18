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
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /* !FONCTION_POINTERS_H_ */
