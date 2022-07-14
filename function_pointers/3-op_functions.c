#include "3-calc.h"
/**
 *op_add - Add function
 *@a: Int 1
 *@b: Int 2
 *Return: Operation selected
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - Add function
 *@a: Int 1
 *@b: Int 2
 *Return: Operation selected
 */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - Add function
 *@a: Int 1
 *@b: Int 2
 *Return: Operation selected
 */

int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - Add function
 *@a: Int 1
 *@b: Int 2
 *Return: Operation selected
 */

int op_div(int a, int b)
{
	if (b <= 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a / b);
}
/**
 *op_mod - Add function
 *@a: Int 1
 *@b: Int 2
 *Return: Operation selected
 */

int op_mod(int a, int b)
{
	if (b <= 0)
	{
	printf("Error\n");
	exit(100);
	}
	return (a % b);
}
