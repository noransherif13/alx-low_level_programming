#include "main.h"

/**
 * puts2 - Prints every other character in the string
 *
 * @str: input string parameter
 *
 * Return: Nothing
*/

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
