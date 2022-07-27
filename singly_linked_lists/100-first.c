#include "lists.h"
/**
 *_main - Apply the constructor attribute so that it
 *is executed before main()
 *Return: 0
 */
void __attribute__ ((constructor)) _main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
