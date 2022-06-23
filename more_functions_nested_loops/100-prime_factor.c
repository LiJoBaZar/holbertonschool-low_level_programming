#include <stdio.h>

/**
 *main - prints the largest prime factor of a number
 *Return: 0 if sucefull
 */
int main(void)

{
	long int n = 612852475143;
	int pfn = 2;

		while (n != 1)
		{
		if (n % pfn == 0)
		{
			n = n / pfn;
		}
		else
		{
			pfn++;
		}
		}
			printf("%d\n", pfn);
		return (0);
}
