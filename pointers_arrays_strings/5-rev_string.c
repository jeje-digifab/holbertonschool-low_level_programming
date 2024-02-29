#include "main.h"

/**
 * rev_string - Entry point.
 * @s: variable.
 * Return: function that prints a sing, followed by a new line, to stdout.
 */

void rev_string(char *s)

{

	int length, i;
	char rev, ori;


	length = 0;



	while (s[length] != '\0')
	{
		length++;
	}

	length--;

	for (i = 0 ; i <= length - i; i++)
	{
		ori = s[i];
		rev = s[length - i];

		s[length - i] = ori;
		s[i] = rev;
	}

}



