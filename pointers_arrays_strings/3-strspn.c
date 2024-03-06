#include "main.h"

/**
 * _strspn - Entry point.
 * @s: initial segment.
 * @accept: character.
 * Return: Returns the number of bytes in the initial segment of s which
 *			consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)

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

	if (*s == *accept)
	{
		return (accept[length]);

	}
	/*
	else
	{
		return (accept[length]);
	}
*/
	return (accept[length]);
}
