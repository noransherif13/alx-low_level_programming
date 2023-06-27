#include "main.h"

/**
 * print_rev - Prints strinf in reverse order
 *
 * @s: input string parameter
 *
 * Return: Nothing
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
