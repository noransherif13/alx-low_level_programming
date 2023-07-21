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
	int i = 0;

	if (array && size && cmp)
	{
		while (i < size)
			if (cmp(array[i]))
				return (i);
		i++;
	}
	return (-1);
}
