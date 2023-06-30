#include "main.h"

/**
 * reverse_array -function that reverses array
 *
 * @a: parameter 1
 * @n: parameter 2
 *
 * Return: always 0 (success)
*/

void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = n - 1; i < j, i++, j++;)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
	return (0);
}
