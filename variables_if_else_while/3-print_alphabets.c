#include <stdio.h>

/**
 *main - prints the alphabet using putchar
 *Return: 0 if success
 */
int main(void)
{
		char n = 'a';

			while (n <= 'z')
		{
				putchar(n);
				n++;
		}
				n = 'A';
			while (n <= 'Z')
		{
				putchar(n);
				n++;
		}
				putchar('\n');
			return (0);
}
