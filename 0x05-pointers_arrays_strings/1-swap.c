#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 *		using two input parameters
 *
 * @a: Input parameter 1
 * @b: Input parameter 2
 *
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
