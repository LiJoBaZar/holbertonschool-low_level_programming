#include "main.h"

/**
 *_sqrt_recursion - Returns the natural square root of a number
 *@n: number
 *Return: Value of operation
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	return (_sqrt(n, 0));
}

/**
 *_sqrt - Returns the sqrt of a number if is natural
 *@n: number
 *@i: iterator
 *Return: Value of operation
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
	{
	return (-1);
	}
	if (i * i == n)
	{
	return (i);
	}
	return (_sqrt(n, i + 1));
}
