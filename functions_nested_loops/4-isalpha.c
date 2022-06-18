#include "main.h"

/**
 *_isalpha - returns 1 if a letter is lower or upper case
 *@c: is a parameter
 *Return: 1 if c is lowercase, 0 if it isnt
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
