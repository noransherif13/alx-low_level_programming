#include <stdio.h>

/**
 * main - Entry point
 *
 * a program that prints alphabet in lower case
 * followed by a new line
 *
 * Return: always 0 (success)
*/


int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
