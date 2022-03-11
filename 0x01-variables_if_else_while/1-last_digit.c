#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: 0 (Successs)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 5 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 5);
	}
	else if (n % 5 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 5);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 5\n", n, n % 5);
	}

	return (0);
}
