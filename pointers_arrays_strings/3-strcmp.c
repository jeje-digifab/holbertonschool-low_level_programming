#include "main.h"

/**
 * _strcmp - function that compares two strings s1 and s2.
 * @s1: first strings.
 * @s2: second strings.
 *
 * Return: returns a value less than, equal to, or greater than zero based
 *			on the lexicographic order of the strings.
 */

int _strcmp(char *s1, char *s2)

{
    while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return (*s1 < *s2) ? (*s1 - *s2) : (*s2 - *s1);
}

