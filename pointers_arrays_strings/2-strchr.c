#include "main.h"

/**
 * _strchr - Entry point.
 * @s: string.
 * @c: character.
 * Return: Returns a pointer to the first occurrence of the character c in the
 *			string s, or NULL if the character is not found.
 */

char *_strchr(char *s, char c)

{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;

	}
	return (0);
}
