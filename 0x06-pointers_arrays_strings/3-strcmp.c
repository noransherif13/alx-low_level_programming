#include "main.h"

/**
 * _strcmp -Function that compares s2 with s1
 *
 * @s1: parameter 1
 * @s2: parameter 2
 *
 * Return: s1[i] - s2[i] if condition is true
 * else returns zero
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return *(unsigned char*)s1 - *(unsigned char*)s2;

}
