#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: Input string parameter
 *
 * Return: Nothing
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		printf(*str + 0);
		str++;
	}
	_putchar("\n");
}
