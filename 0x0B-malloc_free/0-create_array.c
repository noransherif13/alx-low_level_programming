#include "main.h"

/**
 * *create_array - function that creates an array of chars
 *
 * @size: parameter 1
 * @c: parameter 2
 *
 * Return: Pointer to an array of char or NULL
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	while (size--)
		n[size] = c;
	return (n);
}
