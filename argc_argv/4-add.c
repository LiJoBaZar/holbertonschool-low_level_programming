#include <stdio.h>
#include <stdlib.h>
/**
 *main - Prints the result of multiplying 2 numbers
 *@argc: Number of arguments in program
 *@argv: Argument vectors
 *Return: 0 is success
 */
int main(int argc, char *argv[])
{
	int i, j, result = 0;

		if (argc < 2)
		{
			printf("%d\n", 0);
		return (0);
		}
		for (i = 1; i < argc; i++)
		{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
		if (argv[i][j] < 48 || argv[i][j] > 57)
		{
			printf("Error\n");
		return (1);
		}
		}
			result += atoi(argv[i]);
		}
			printf("%d\n", result);
		return (0);
}
