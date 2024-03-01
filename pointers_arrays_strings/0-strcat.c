#include "main.h"

/**
 * rev_string - Entry point.
 * @s: variable.
 * Return: function that prints a sing, followed by a new line, to stdout.
 */

char *_strcat(char *dest, char *src)



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
