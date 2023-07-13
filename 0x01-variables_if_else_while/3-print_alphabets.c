#include <stdio.h>

/**
 * main - Entry point
 *
 * function that prints lowercase alphabet
 * followed by uppercase alphabet
 * then new line
 *
 * Return: Always 0 (success)
*/
int main(void)
{
	char c = 'a';
	char C = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
