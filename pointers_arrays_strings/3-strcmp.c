#include "main.h"

/**
 * *_strcmp - Copies a string
 *@s1: is a parameter
 *@s2: is a parameter
 *Return: res parameter
 */
int _strcmp(char *s1, char *s2)
{
	int i, res;

	for (i = 0; s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'; i++)
	{
	}
	res = s1[i] - s2[i];
	return (res);
}
