#include "main.h"

/**
 * _strlen - Entry point.
 * @s: variable.
 * Return: function that takes a pointer to an int as parameter and updates
 *			the value it points to to 98.
 */

int _strlen(char *s)

{
	int a;

	a = 0;

	while (*(s + a) != '\0')
	{
		a++;
	}
 return (a);
}
