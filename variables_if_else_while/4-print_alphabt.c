#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)

{
	char ch;
	char maj;


	for (ch = 'a' ; ch <= 'd' ; ch++)
	{
	putchar(ch);
	}

	for (maj = 'f' ; maj <= 'p' ; maj++)
	{
	putchar(maj);
	}

	for (maj = 'r' ; maj <= 'z' ; maj++)
	{
	putchar(maj);
	}

	putchar('\n');

	return (0);
}
