#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the result of multiplying 2 numbers
 *@argc: Number of arguments in program
 *@argv: Argument vectors
 *Return: 0 is success
 */
int main(int argc, char *argv[])
{
	int i, result = 1;

		if (argc != 3)
		{
			printf("Error\n");
		return (1);
		}
		for (i = 1; i < argc; i++)
		{
			result *= atoi(argv[i]);
		}
			printf("%d\n", result);
		return (0);
}
