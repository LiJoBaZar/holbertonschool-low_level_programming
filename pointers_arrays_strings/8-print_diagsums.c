#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - Prints the sum of the two diagonals of a square matrix
 *@a: is a parameter
 *@size: is a parameter
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[(size + 1) * i];
	}
	for (i = 0; i < size; i++)
	{
		sum2 = sum2 + a[(size - 1) * (i + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
