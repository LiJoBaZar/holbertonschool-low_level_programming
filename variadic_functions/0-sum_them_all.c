#include "variadic_functions.h"

/**
 *sum_them_all - sum of all its parameters
 *@n: Numbers to sum
 *Return: Sum if n != 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;
	va_list numbers;

	if (n != 0)
	{
		va_start(numbers, n);
		for (i = 0; i < n; i++)
		sum += va_arg(numbers, unsigned int);
		va_end(numbers);
	}
	return (sum);
}
