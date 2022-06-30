#include "main.h"

/**
 *_strspn - Length of a prefix substring
 *@s: is a parameter
 *@accept: is a parameter
 *Return: Length of a prefix
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, flag, cont = 0;

	for (i = 0; s[i] != '\0' ; i++)
	{
		flag = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				cont++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (cont);
		}
	}
	return (0);
}
