#include <stdio.h>

/**
 *main - prints the alphabet using putchar
 *Return: 0 if success
 */
int main(void)
{
		char n = '0';
			while (n <= '9')
		{
				putchar(n);
				n++;
		}
				n = 'a';
			while (n <= 'f')
		{
				putchar(n);
				n++;
		}
				putchar('\n');
			return (0);
	}
