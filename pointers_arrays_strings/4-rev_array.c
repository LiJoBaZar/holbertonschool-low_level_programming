#include "main.h"

/**
 *reverse_array - Reverses an array of integers
 *@a: is a parameter
 *@n: is a parameter
 */
void reverse_array(int *a, int n)
{
	int i, j, r;

	j = n - 1;
	for (i = 0; i < n / 2; i++, j--)
	{
	r = a[i];
	a[i] = a[j];
	a[j] = r;
	}
}
