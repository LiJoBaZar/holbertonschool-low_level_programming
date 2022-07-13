#include <stdlib.h>
#include "main.h"

/**
 *string_nconcat - Concatenates two strings
 *@s1: String one
 *@s2: String two
 *@n: Length to concatenate
 *Return: a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1, len2, i, j;

		if (s1 == NULL)
			s1 = "";

		if (s2 == NULL)
			s2 = "";

		for (len1 = 0; s1[len1] != '\0'; len1++)
			;
		for (len2 = 0; s2[len2] != '\0'; len2++)
			;

		if (n >= len2)
			p = malloc((len1 + len2 + 1) * sizeof(char));
		else
			p = malloc((len1 + n + 1) * sizeof(char));

		if (p == NULL)
			return (p);

		for (i = 0; i < len1; i++)
			p[i] = s1[i];

		for (j = 0; n < len2 && i < (len1 + n); i++, j++)
			p[i] = s2[j];

		for (j = 0; n >= len2 && i < (len1 + len2); i++, j++)
			p[i] = s2[j];

		p[i] = '\0';
		return (p);
}
