#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Entry point.
 * @s1: pointeur la phrase à copier.
 * @s2: pointeur la phrase à copier.
 * Return: function that concatenates two strings.
 */

char *str_concat(char *s1, char *s2)
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

	buffer = malloc((len1 + len2 + 1));
	if (!buffer)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		buffer[i] = s1[i];
	}

	for (j = 0; j < len2; j++)
	{
		buffer[i + j] = s2[j];
	}
	buffer[i + j] = '\0';
	return (buffer);
}
