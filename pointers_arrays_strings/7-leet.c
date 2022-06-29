#include "main.h"

/**
 *leet - Encodes a string into 1337
 *@s: is a parameter
 *Return: String in 1337 code
 */
char *leet(char *s)
{
	int i, j;
	char a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char b[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; a[j] != '\0'; j++)
	{
	if (s[i] == a[j])
	{
		s[i] = b[j];
	}
	}
	}
	return (s);
}
