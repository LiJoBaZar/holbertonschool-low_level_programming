#include "main.h"

/**
 *jack_bauer- prints every minute of the day ofJack Bauer, in 24hrs
 *
 *
 */
void jack_bauer(void)
{
	int m1, m2, h1, h2;

	for (h1 = 0; h1 < 3; h1++)
	{
		for (h2 = 0; h2 <= 9; h2++)
		{
			for (m1 = 0; m1 <= 5; m1++)
			{
				for (m2 = 0; m2 <= 9; m2++)
				{
					if (((h1 * 10) + h2) >= 24)
						break;
					_putchar(48 + h1);
					_putchar(48 + h2);
					_putchar(58);
					_putchar(48 + m1);
					_putchar(48 + m2);
					_putchar(10);
				}
			}
		}
	}
}
