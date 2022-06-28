#include "main.h"

/**
 *print_rev - Prints a string, in reverse, followed by a new line
 *@s: is a parameter
 */
void print_rev(char *s)
{
	int i;

		for (i = 0; s[i] != '\0'; i++)
		{
		}
			i = i - 1;
		for (; i >= 0; i--)
			{
			_putchar(s[i]);
			}
			_putchar('\n');
}
