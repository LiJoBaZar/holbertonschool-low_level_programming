#include "main.h"

/**
 *flip_bits - returns the number of bits needed to get the other number.
 *@n: First Number
 *@m: Second Number
 *Return: Number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int cont = 0, i;
	unsigned long int unique = n ^ m, num;

	for (i = 63; i >= 0; i--)
	{
		num = unique >> i;
		if (num & 1)
			cont++;
	}
	return (cont);
}
