#include "main.h"

/**
 **_strchr - fills memory with a constant byte
 *@s: is a parameter
 *@c: is a parameter
 *Return: Return the value of s if is the same as c, else NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	else
	{
		return ('\0');
	}
}
