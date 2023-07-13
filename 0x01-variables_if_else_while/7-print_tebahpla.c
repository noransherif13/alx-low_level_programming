#include <stdio.h>

/**
 * main -entry point
 *
 * Description : prints alphabet in reverse
 * followed by a new line
 *
 * Return: always zero (success)
*/

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
