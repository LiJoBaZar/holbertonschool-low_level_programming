#include "main.h"
#include <stdio.h>
/**
 *print_times_table - prints the n times table if n < 16 and > 0
 *@n: is a parameter
 */
void print_times_table(int n)
{
		int n1, n2;

			if (n >= 0 && n <= 15)
			{
				for (n1 = 0; n1 <= n; n1++)
				{
					for (n2 = 0; n2 <= n; n2++)
					{
						printf("%i", n1 * n2);
						if (n2 < n)
						{
							printf(",");
							if (n1 * (n2 + 1) < 10)
								printf(" ");
							else if (n1 * (n2 + 1) < 100 && n1 * (n2 + 1) >= 10)
								printf(" ");
							else
								printf(" ");
						}
					}
					printf('\n');
				}
			}
}
