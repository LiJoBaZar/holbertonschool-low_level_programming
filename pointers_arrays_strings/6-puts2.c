#include "main.h"

/**
 *puts2 - Prints every other char of a string, followed by a new line
 *@str: is a parameter
 */
void puts2(char *str)
{
	int i, j;

		for (i = 0; str[i] != '\0'; i++)
		{
		}
		for (j = 0; j < i ; j += 2)
		{
			_putchar(str[j]);
		}
			_putchar('\n');
}
