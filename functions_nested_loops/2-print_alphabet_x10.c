#include "main.h"

/**
 *print_alphabet_x10 - prints the alphabet using _putchar 10 times
 *Return: no return void function
 */
void print_alphabet_x10(void)
{
		char n;
		int i;

		i = 0;

		while (i < 10)
		{
			n = 'a';
			while (n <= 'z')
			{
				_putchar(n);
				n++;
			}
		_putchar('\n');
		i++;
		}
}
