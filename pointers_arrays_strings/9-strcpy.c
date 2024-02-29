#include "main.h"


/**
 * _strcpy - Entry point.
 * @dest: variable.
 * @src: variable.
 * Return: function that returns the length of a string.
 */

char *_strcpy(char *dest, char *src)

{
	int length, rest;


	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (rest = 0; rest <= length; rest++)
	{
		dest[rest] = src[rest];
	}

	return (dest);

}
