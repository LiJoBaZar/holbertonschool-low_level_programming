#include "main.h"
#include <stdio.h>

/**
 *Print_to_98 - prints all natural numbers from n to 98
 *Return: nothing, finction void
 *@n: is a parameter
 */
void print_to_98(int n)
{
		int i;

		if (n == 98)
			printf("%i", n);
		else if (n > 98)
		{
			for (i = n; i >= 98; i--)
			{
				printf("%i", i);
				if (i != 98)
					printf(", ");
			}
		}
		else if (n < 98)
		{
			for (i = n; i <= 98; i++)
			{
				printf("%i,", i);
				if (i != 98)
					printf(", ");
			}
		}
		printf("\n");
}
