#include <stdio.h>

/**
 * main - entry point
 *
 * prints alphabet in lowercase except q&e
 *
 * Return: always zero (success)
*/


int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'q' || c == 'e')
			c++;
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
