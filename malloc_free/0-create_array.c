#include <stdlib.h>
/**
 *create_array - Creates an array of chars
 *@size: Number of arguments in program
 *@c: Argument to assign in a space
 *Return: Pointer of an array of char c
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

		if (size == 0)
		{
		return (NULL);
		}
			p = malloc(size * sizeof(char));
		if (p == NULL)
		{
		return (0);
		}
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
			p[i] = '\0';
		return (p);
}
