#include "main.h"

/**
 *swap_int - swaps the values of two integers
 *@a: is a parameter
 *@b: is a parameter
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
