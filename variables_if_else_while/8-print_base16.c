#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)

{
	char ch;
	int hex;

	for (hex = 0 ; hex <= 9 ; ++hex)
	{
	putchar(hex + '0');
	}

	for (ch = 'a' ; ch <= 'f' ; ch++)
	{
	putchar(ch);
	}


	putchar('\n');

	return (0);
}
