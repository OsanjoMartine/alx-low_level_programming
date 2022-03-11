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
	int n = 122;

	while (n >= 97)
	{
		char c = n;

		putchar(c);
		n--;
	}
	putchar('\n');

	return (0);
}
