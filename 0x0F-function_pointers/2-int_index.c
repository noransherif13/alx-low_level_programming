#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index -function
 *
 * @array: parameter 1
 * @size:parameter 2
 * @cmp:parameter 3
 *
 * Return:i or -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
