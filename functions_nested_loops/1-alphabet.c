#include "main.h"
/**
 *print_alphabet - entry point
 *Description: Prints the alphabet with _putchar
 *Return: void
 */
void print_alphabet(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
		_putchar('\n');
}
