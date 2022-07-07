#include <stdio.h>
/**
 *main - Prints the arguments
 *@argc: Number of arguments in program
 *@argv: Argument vectors
 *Return: 0 is success
 */
int main(int argc, char *argv[])
{
	int i;

		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
		return (0);
}
