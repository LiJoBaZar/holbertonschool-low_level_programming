#include "main.h"

/**
 *print_sign - prints the alphabet using putchar
 *@n: is a parameter
 *Return: 1 if c is lowercase, 0 if it isnt
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
