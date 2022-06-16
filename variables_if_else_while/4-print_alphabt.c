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
			if (n == 'e' || n == 'q')
			{
				n++;
			}
			}

				putchar('\n');
			return (0);
}
