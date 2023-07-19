#include "function_pointer.h"

/**
 * array_iterator -function
 * @array:parameter1
 * @size:parameter2
 * @action: pointer to function
 * return:void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
