#include "variadic_functions.h"

/**
 *print_numbers - Print numbers given with the separator
 *@separator: string to be printed between numbers
 *@n: Numbers of integers passed to function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		printf("%d", va_arg(numbers, int));
		else if (separator != NULL && i == 0)
		printf("%d", va_arg(numbers, int));

		else
		printf("%s%d", separator, va_arg(numbers, int));
	}
	va_end(numbers);
	printf("\n");
}
