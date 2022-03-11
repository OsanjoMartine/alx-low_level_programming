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
	char c = '0';

	for (; c <= '9'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
