#include <stdio.h>

/**
 *main - prints combination of numbers without repeating using putchar
 *Return: 0 if succes
 */
int main(void)
{
	int i = 48;
	int j = 49;
	int k = 50;

		while (i < 58)
		{
			while (j < 58)
			{
				putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55 || j != 56 || k != 57)
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i;
	}
	putchar('\n');
	return (0);
}
