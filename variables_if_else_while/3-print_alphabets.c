#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)

{
	char ch;
	char maj;


	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
	putchar(ch);
	}

	for (maj = 'A' ; maj <= 'Z' ; maj++)
	{
	putchar(maj);
	}


	putchar('\n');

	return (0);
}
