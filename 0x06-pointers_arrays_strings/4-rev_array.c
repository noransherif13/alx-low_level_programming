#include "main.h"

/**
 * reverse_array -function that reverses array
 *
 * @a: parameter 1
 * @n: parameter 2
 *
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n--, i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
	
}
