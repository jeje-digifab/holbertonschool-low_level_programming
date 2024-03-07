#include "main.h"

/**
 * _strpbrk - Entry point.
 * @s: string.
 * @accept: character.
 * Return: Returns a pointer to the first occurrence of the character c in the
 *			string s, or NULL if the character is not found.
 */

char *_strpbrk(char *s, char *accept)

{
	int len, length;

	len = 0;
	length = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	while (accept[length] != '\0')
	{
		length++;
	}

	if (s[len] == accept[length])
	{
		return (s);
	}

	return (0);
}
