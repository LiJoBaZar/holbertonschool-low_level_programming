#include <stdio.h>

/**
 *main - prints combination of numbers without repeating using putchar
 *Return: 0 if success
 */
int main(void)
{
	int n = 48;
	int m = 48;
	int j = 49;

		while (n <= 57 && m <= 57)
		{
			while (m <= 57)
			{
				if (n >= m)
				{
					m++;
				}
				putchar(n);
				putchar(m);
				if ((n != 57 || m != 57) && j < 57)
				{
					putchar(',');
					putchar(' ');
				}
				m++;
			}
			n++;
			j++;
			m = j;
		}
			putchar('\n');
			return (0);
}
