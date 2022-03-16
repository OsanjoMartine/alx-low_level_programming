#include "main.h"
#include <stdio.h>

/**
 * fibonacci - prints the finonacci 50 sequence
 *
 * Return: 0 (Success)
 */
void fibonacci(void)
{
    int fibo1;
    int fibo2;
    int holder;
    int i;

    fibo1 = 0;
    fibo2 = 1;

    for (i = 0; i < 50; i++)
    {
        holder = fibo2;
        fibo2 += fibo1;
        fibo1 = holder;

        printf("%d", fibo2);
        printf(",");
    }
    printf("\n");
}


/**
 * main - runs the code
 *
 * Return: 0 (Success)
 */
int main(void)
{
	fibonacci();

	return (0);
}
