#include "main.h"

/**
 * string_toupper - function that capitalizes characters of string
 *
 * @str: input parameter 1
 *
 * Return: capitalized string
*/

char *string_toupper(char *str)
{
	int i = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str[i]);
}
