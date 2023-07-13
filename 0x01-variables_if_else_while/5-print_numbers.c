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

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
