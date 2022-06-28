#include "main.h"

/**
 *rev_string - Reverses a string
 *@s: is a parameter
 */
void rev_string(char *s)
{
	char r;
	int i, j;

		for (i = 0; s[i] != '\0'; i++)
		{
		}
			j = 0;
			i = i - 1;
		for (; i >= j; i--)
			{
			r = s[j];
			s[j] = s[i];
			s[i] = r;
			j++;
			}
}
