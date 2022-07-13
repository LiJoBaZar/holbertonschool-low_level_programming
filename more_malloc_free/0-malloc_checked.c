#include <stdlib.h>
#include "main.h"

/**
 *malloc_checked - Allocates memory using malloc
 *@b: String
 *Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
	exit(98);
	}
	return (p);
}
