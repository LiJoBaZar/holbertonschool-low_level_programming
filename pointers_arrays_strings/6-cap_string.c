#include "main.h"

/**
 *cap_string - Capitalizes a string
 *@s: is a parameter
 *Return: Capitalized string s
 */
char *cap_string(char *s)
{
	int i, j;
	char sepa[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		for (j = 0; sepa[j] != '\0'; j++)
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z' && s[i] == sepa[j])
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
