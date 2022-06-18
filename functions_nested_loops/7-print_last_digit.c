#include "main.h"
/**
 *print_last_digit - Print last digit of the input.
 *@n: int type intiger
 *Return: 0 always
 */
int print_last_digit(int n)
{
		int n1;

		if (n < 0)
		{
			n1 = -1 * (n % 10);
			_putchar(48 + n1);
			return (n1);
													}
		else
		{
			_putchar(48 + n % 10);
			return (n % 10);
		}
}
