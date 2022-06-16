#include <stdio.h>

/**
 *main - prints the alphabet using putchar
 *Return: 0 if success
 */
int main(void)
	{
		char n = 'z';
			while (n >= 'a')
		{
				putchar(n);
				n--;
		}
				putchar('\n');
			return (0);
	}
