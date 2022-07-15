#include "variadic_functions.h"

/**
 *print_all - Prints any constant
 *@format: Types of arguments passed to function
 */

void print_all(const char *const format, ...)
{
	int i = 0, flag = 0;
	char *string;
	va_list argum;

	va_start(argum, format);

	while (format[i] != 0 && format)
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(argum, int)), flag = 1;
			break;
		case 'i':
			printf("%d", va_arg(argum, int)), flag = 1;
			break;
		case 'f':
			printf("%f", va_arg(argum, double)), flag = 1;
			break;
		case 's':
			string = va_arg(argum, char*);
			if (string == NULL)
			{
				printf("(nil)"), flag = 1;
				break;
			}
				printf("%s", string), flag = 1;
				break;
			default:
				flag = 0;
				break;
			}
			if (flag == 1 && format[i + 1] != '\0')
				printf(", ");
			i++;
		}
		printf("\n");
		va_end(argum);
}
