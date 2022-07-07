#include <stdlib.h>
#include "main.h"

/**
 *_strdup - Returns a pointer to a newly allocated space in memory
 *with the copied string
 *@str: String
 *Return: Pointer of the copied string
 */
char *_strdup(char *str)
{
	unsigned int i, len;
	char *s;

	if (str == NULL)
	{
	return (NULL);
	}
	for (len = 0; str[len] != '\0'; len++)
		{
		}
		s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
	{
	return (NULL);
	}
	for (i = 0; i <= len; i++)
		{
		s[i] = str[i];
		}
	return (s);
}
