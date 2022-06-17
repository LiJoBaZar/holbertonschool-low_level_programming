#include <stdio.h>

/**
 *main - prints the alphabet using putchar
 *Return: 0 if success
 */
int main(void)
	{
		int n = 48;
			while (n <= 57)
		{
				putchar(n);
				n++;
			if (n <= 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
				putchar('\n');
			return (0);
	}
