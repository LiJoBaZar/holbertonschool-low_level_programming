#include "main.h"
#include <stdlib.h>
/**
 *array_range - Creates an array of integers
 *@min: min value of the pointer
 *@max: max value of the pointer
 *Return: Pointer of integers
 */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		p[i] = min;

	return (p);
}
