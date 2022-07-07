#include <stdio.h>
/**
 *main - Prints the programs name
 *@argc: Number of arguments in program
 *@argv: Argument vectors
 *Return: 0 is success
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
