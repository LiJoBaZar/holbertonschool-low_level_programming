#include "main.h"

/**
 **_memcpy - fills memory with a constant byte
 *@dest: is a parameter
 *@src: is a parameter
 *@n: is a parameter
 *Return: dest parameter
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
