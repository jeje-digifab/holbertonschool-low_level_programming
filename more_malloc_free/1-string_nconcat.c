#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Entry point.
 * @s1: string.
 * @s2: string.
 * @n: premiers octets de s2.
 * Return: function that allocates memory using malloc.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *buffer;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	buffer = malloc(len1 + n + 1);
	if (!buffer)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		buffer[i] = s1[i];
	}

	for (j = 0 ; j < n; j++)
	{
		buffer[i + j] = s2[j];
	}
	buffer[i + j] = '\0';
	return (buffer);
}
