#include "main.h"

/**
 * _strncat - functions that concatenas
 * n characters of src to dest
 *
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 *
 * Return: pointer to string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n; j++)
		dest[i++] = src[j];
	dest[i] = '\0';
	return (dest);
}
