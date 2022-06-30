#include "main.h"

/**
 *wildcmp - Compare two strings
 *@s1: Pointer to the first string
 *@s2: Pointer to the second string
 *Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2 && *s1 != '\0')
	{
	return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s1 == '\0')
	{
	if (*s2 != '\0' && *s2 == '*')
	{
	return (wildcmp(s1, s2 + 1));
	}
	if (*s2 == '\0')
	{
	return (1);
	}
	}
	if (*s2 == '*')
	{
	return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	return (0);
}
