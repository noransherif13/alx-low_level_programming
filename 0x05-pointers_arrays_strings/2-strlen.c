#include "main.h"

/**
 * _strlen - returs length of a string
 *
 * @s: string input parameter
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != "\0")
	{
		length++;
		s++;
	}

	return (length);
}
