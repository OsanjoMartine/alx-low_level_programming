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
	int c = 0;

	for (; c <= 9; c++)
	{
		putchar((c % 10) + '0');
	}
	putchar('\n');

	return (0);
}
