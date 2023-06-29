#define "main.h"

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
	int c, c2;

	c = 0;
	while (dest[c])
		c++;
	for (c2 = 0; src[c2]; c2++)
		dest[c++] = src[c2];

	return (dest);
}
