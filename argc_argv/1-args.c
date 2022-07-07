#include <stdio.h>
/**
 *main - Prints the numer of arguments
 *@argc: Number of arguments in program
 *@argv: Argument vectors
 *Return: 0 is success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
