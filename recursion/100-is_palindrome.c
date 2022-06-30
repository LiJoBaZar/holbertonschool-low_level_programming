#include "main.h"

/**
 *is_palindrome - returns 1 if a string is a palindrome, 0 if not
 *@s: string
 *Return: Value of operation
 */
int is_palindrome(char *s)
{
	if (*s == 0)
	{
	return (1);
	}
	return (_palindrome(s, 0, _strlen_recursion(s)));
}

/**
 *_strlen_recursion - Returns the length of a string
 *@s: String
 *Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 *_palindrome - Returns 0 or 1
 *@s: String
 *@i: iterator
 *@len: lenght of the string
 *Return: Value of operation
 */
int _palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
	return (0);
	}
	if (i >= len)
	{
	return (1);
	}
	return (_palindrome(s, i + 1, len - 1));
}
