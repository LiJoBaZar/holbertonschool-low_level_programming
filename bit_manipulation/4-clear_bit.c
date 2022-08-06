#include "main.h"

/**
 *clear_bit - Sets the value of a bit to 0 at a given index
 *@n: Number
 *@index: index of the bit you want to set to 0
 *Return: 1 if worked otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1 << index) & *n);
	return (1);
}
