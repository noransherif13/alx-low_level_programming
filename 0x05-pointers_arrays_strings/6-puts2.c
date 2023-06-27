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

	for (int i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}

	_putchar('\n');
}
