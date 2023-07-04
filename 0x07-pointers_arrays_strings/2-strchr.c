#include "main.h"

/**
 * _strchr -Function that returns the location
 * of the first occurence of a char in a string
 *
 * @s: parameter 1
 * @c: parameter 2
 *
 * Return: location of c if found or
 * Null if not found
*/

char *_strchr(char *s, char c)
{
	int itr;

	for (itr = 0; s[itr] >= '\0'; itr++)
	{
		if (s[itr] == c)
		{
			return (s + itr);
		}
	}
	return ('\0');
}
