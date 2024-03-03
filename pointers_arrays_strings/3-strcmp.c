#include "main.h"
#include <stdio.h>


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


	int lengths1, lengths2;

	lengths1 = 0;
	lengths2 = 0;

	while (s1[lengths1] != '\0')
	{
		lengths1++;
	}

	while (s2[lengths2] != '\0')
	{
		lengths2++;
	}


	if (*(s1)> *(s2))
	{
		return(1);
	}

	else if (*(s1) == *(s2))
	{
		return (0);
	}

	else
	{
		return (-1);
	}


}
