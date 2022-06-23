#include <stdio.h>
/**
 *print_to_98 - the function return all number until 98
 *@n: valor de numbers
 */
void print_to_98(int n)

{
	int z;

	if (n == 98)
	printf("%i", n);
	else if (n  > 98)
	{
		for (z = n; z >= 98; z--)
		{
			printf("%i", z);
			if (z != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	else if (n < 98)
	{
		for (z = n; z <= 98; z++)
		{
			printf("%i", z);
			if (z != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	printf("\n");
}
