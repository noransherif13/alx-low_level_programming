#include "main.h"

/**
 * _strcat  - Function that concatenats two string
 *
 * @dest: pointer to char parameter 1
 * @src: pointer to char parameter 2
 *
 * Return: pointer to char array
*/

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
