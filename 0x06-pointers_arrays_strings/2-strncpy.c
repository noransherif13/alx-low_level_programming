#include "main.h"

/**
 * _strncpy - a function that copies src into dest
 *
 * @dest: parameter 1
 * @src: parameter 2
 * @n: parameter 3
 *
 * Return: a pointer to a string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
