#include "main.h"

/**
 *_strcpy - Prints a string, in reverse, followed by a new line
 *@dest: is a parameter
 *@src: is a parameter
 *Return: dest parameter
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	{
	}
	for (j = 0; j < i; j++)
		{
		dest[j] = src[j];
		}
		dest[j] = '\0';
	return (dest);
}
