#include "main.h"

/**
 * puts_half - prints the 2nd half of a string
 *
 * @str: string input parameter
 *
 * Return: Nothing
*/
void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
