#include <stdio.h>

/**
 *Print_to_98 - prints all natural numbers from n to 98
 *Return: nothing, finction void
 *@n: is a parameter
 */
void print_to_98(int n)
{
		int i = 0;

			if (n < 98)
			{
				for (i = n ; i < 98 ; i++)
					printf("%d, ", i);
					printf("%d\n", 98);
			}
				else if (n == 98)
					printf("%d\n", 98);
				else
					{
				for (i = n ; i > 98 ; i--)
					printf("%d, ", i);
					printf("%d\n", 98);
					}
				return;
}
