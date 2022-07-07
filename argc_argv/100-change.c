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
	int coins = 0, result;

		if (argc != 2)
		{
			printf("Error\n");
		return (1);
		}
			result = atoi(argv[1]);
		if (result < 0)
		{
			printf("%d\n", 0);
		return (0);
		}
		if (result % 25 >= 0)
		{
			coins += result / 25;
			result = result % 25;
		}
		if (result % 10 >= 0)
		{
			coins += result / 10;
			result = result % 10;
		}
		if (result % 5 >= 0)
		{
			coins += result / 5;
			result = result % 5;
		}
		if (result % 2 >= 0)
		{
			coins += result / 2;
			result = result % 2;
		}
		if (result % 1 >= 0)
		{
			coins += result / 1;
		}
			printf("%d\n", coins);
		return (0);
}
