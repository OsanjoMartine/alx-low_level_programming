#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		char c = n;

		if (n != 101 && n != 113)
		{
			putchar(c);
		}
		n++;
	}
	putchar('\n');
}
