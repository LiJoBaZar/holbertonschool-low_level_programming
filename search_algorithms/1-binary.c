#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 *binary_search - Function that searches for a value in a sorted array of
 *integers using the Binary search algorithm
 *@array: Sorted array to search
 *@size: Size of the array
 *@value: Value to find in array
 *Return: the index where value is located, else -1
 */
int binary_search(int *array, size_t size, int value)
{
	int i, left = 0, mid = size / 2, right = size - 1;

	if (!array)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
