#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 *linear_search - Function that searches for a value in an array of integers
 *using the Linear search algorithm
 *@array: Array to search
 *@size: Size of the array
 *@value: Value to find in the array
 *Return: The first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
