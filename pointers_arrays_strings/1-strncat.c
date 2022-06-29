#include "main.h"

/**
 * *_strncat - Concatenates two strings
 *@dest: is a parameter
 *@src: is a parameter
 *@n: is a parameter
 *Return: dest parameter
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
	dest[i] = src[j];
	i++;
	}
	return (dest);
}
