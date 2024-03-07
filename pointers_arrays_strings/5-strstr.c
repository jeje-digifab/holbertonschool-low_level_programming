#include "main.h"

/**
 * _strstr - Entry point.
 * @haystack: initial segment.
 * @needle: character.
 * Return: Returns the number of bytes in the initial segment of s which
 *			consist only of bytes from accept.
 */

char *_strstr(char *haystack, char *needle)


{
	int len, length;

	len = 0;
	length = 0;

	while (haystack[len] != '\0')
	{
		len++;
	}

	while (needle[length] != '\0')
	{
		length++;
	}

	if (haystack[len] == needle[length])
	{
		return (needle);
	}

	return (0);
}

