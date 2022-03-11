#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 *Return: 0 (Successs)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		char c = n;

		putchar(c);
		putchar('\n');
		n++;
	}

	return (0);
}
