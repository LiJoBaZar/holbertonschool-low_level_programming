#include <stdlib.h>
#include "function_pointers.h"

/**
 *array_iterator - executes function
 *@array: Array of elements
 *@size: Size of the array
 *@action: Pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	action(array[i]);
}
