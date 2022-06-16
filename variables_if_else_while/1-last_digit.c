#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - assign a random number, show if the last number is positive negative
 *or 0
 *Return: 0
 */

int main(void)
{
		int n;
		int ulti;

				srand(time(0));
				n = rand() - RAND_MAX / 2;
				ulti = n % 10;
				if (ulti > 5)
					printf("Last digit of %d is %d and is greater than 5\n", n, ulti);
				else if (ulti == 0)
					printf("Last digit of %d is %d and is 0\n", n, ulti);
				else
					printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ulti);
				return (0);
}
