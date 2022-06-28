#include "main.h"

/**
 *puts_half - Prints a string, followed by a new line
 *@str: is a parameter
 */
void puts_half(char *str)
{
	int i, j, n;

		for (i = 0; str[i] != '\0'; i++)
		{
		}
		if (i % 2 == 0)
			{
		for (j = i / 2; str[j] != '\0'; j++)
				{
			_putchar(str[j]);
				}
			}
		else
					{
		for (n = (i - 1) / 2; n < i - 1; n++)
						{
			_putchar(str[n + 1]);
						}
					}
			_putchar('\n');
}
