#include "main.h"

/**
 * _memset - Function that changes n bytes
 * of a string to b
 *
 * @s: parameter 1
 * @b: parameter 2
 * @n: parameter 3
 *
 * Return: a pointer to s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int itr;

	for (itr = 0; n > 0; itr++, n--)
	{
		s[itr] = b;
	}

	return (s);
}
