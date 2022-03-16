#include "main.h"
#include <stdio.h>

/**
 * even_liber_abbaci - prints the finonacci 50 sequence
 *
 * Return: 0 (Success)
 */
void even_liber_abbaci(void)
{
	unsigned long int fibo1;
	unsigned long int fibo2;
	unsigned long int holder;
	unsigned long int sum;
	int i;

	fibo1 = 0;
	fibo2 = 1;

	for (i = 0; i < 50; i++)
	{
		if (fibo2 >= 4000000)
		{
			printf("%lu", sum);
			printf("\n");
			return;
		}

		sum += fibo2;
		holder = fibo2;
		fibo2 += fibo1;
		fibo1 = holder;

	}
}


/**
 * main - runs the code
 *
 * Return: 0 (Success)
 */
int main(void)
{
	even_liber_abbaci();

	return (0);
}
