#include "main.h"

/**
 *is_prime_number - returns 1 if integer is a prime number, otherwise return 0
 *@n: number
 *Return: Value of operation
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0);
	}
	return (_prime(n, n - 1));
}

/**
 *_prime - Returns 0 or 1
 *@n: number
 *@i: iterator
 *Return: Value of operation
 */
int _prime(int n, int i)
{
	if (i == 1)
	{
	return (1);
	}
	if (n % i == 0)
	{
	return (0);
	}
	return (_prime(n, i - 1));
}
