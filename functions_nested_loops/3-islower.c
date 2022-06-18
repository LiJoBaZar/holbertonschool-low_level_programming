#include "main.h"

/**
 *_islower - prints the alphabet using putchar
 *@c: is a parameter
 *Return: 1 if c is lowercase, 0 if it isnt
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
