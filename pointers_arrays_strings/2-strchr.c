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
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		if (s[len] == c)
		{
			return (&s[len]);
		}
		len++;

	}
	return (0);
}
