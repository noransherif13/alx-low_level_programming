#include <stdio.h>

/**
 * main - Entry point
 *
 * function that prints numbers from 1-9
 *
 * Return: always 0 (success)
*/

int main(void)
{
	int i;

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);
}
