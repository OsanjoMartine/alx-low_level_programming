#include "main.h"
#include <stdio.h>

/**
 * even_liber_abbaci - prints the finonacci 50 sequence
 *
 * Return: 0 (Success)
 */
void even_liber_abbaci(void)
{
	int fibo1;
	int fibo2;
	int holder;
	int sum;

	fibo1 = 0;
	fibo2 = 1;

	while (fibo2 < 4000000 && fibo2 > 0)
	{
        if ( fibo2 % 2 == 0)
        {
		    sum += fibo2;
        }
		holder = fibo2;
		fibo2 += fibo1;
		fibo1 = holder;
	}

    printf("%d", sum);
	printf("\n");
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
