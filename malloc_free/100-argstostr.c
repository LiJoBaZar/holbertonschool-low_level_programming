#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *argstostr - Concatenates all the arguments of your program
 *@ac: Number of arguments
 *@av: Argument values
 *Return: Pointer of the arguments
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++)
	{
		len++;
	}
		len++;
	}

	s = (char *)malloc(sizeof(char) * (len + 1));

	if (s == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j] != '\0'; j++, k++)
	{
		s[k] = av[i][j];
	}
		s[k] = '\n';
		k++;
																			}
	return (s);
}
