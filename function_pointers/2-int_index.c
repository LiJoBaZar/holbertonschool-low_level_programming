#include <stdlib.h>
#include "function_pointers.h"

/**
 *int_index - executes function
 *@array: Array of elements
 *@size: Size of the array
 *@cmp: Pointer to function
 *Return: -1 if no element matches or if size <=0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
	for (i = 0; i < size; i++)
		{
		if (cmp(array[i]) != 0)
			{
			return (i);
			}
		}
	}
	return (-1);
}
