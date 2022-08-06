#include "main.h"

/**
 *get_bit - Returns the value of a bit at a given index
 *@n: Number
 *@index: index of the bit you want to get
 *Return: Value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int valbit;

	if (index > 63)
		return (-1);

	valbit = (n >> index) & 1;

	return (valbit);
}
