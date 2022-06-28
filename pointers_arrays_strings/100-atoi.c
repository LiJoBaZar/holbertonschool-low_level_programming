#include "main.h"

/**
 *_atoi - Converts a string to an integer
 *@s: is a parameter
 *Return: integer
 */
int _atoi(char *s)
{
	int i;
	unsigned int res = 0;
	int digit;
	int signo = 1;
	int flag = 0;

		for (i = 0; s[i] != '\0'; i++)
		{
			if (s[i] == '-')
			{
				signo = signo * -1;
			}
			if (s[i] >= '0' && s[i] <= '9')
				{
				digit = s[i] - '0';
				res = res * 10 + digit;
				flag = 1;
				}
			else if (flag == 1)
					{
				break;
					}
		}
		res = res * signo;
		return (res);
}
