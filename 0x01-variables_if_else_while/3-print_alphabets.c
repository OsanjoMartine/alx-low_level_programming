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
		int n = 97;

		while (n <= 122)
		{
			char c = n;

			putchar(c);
			n++;
		}

		n = 65;

		while (n <= 90)
		{
			char c = n;

			putchar(c);
			n++;
		}
		putchar('\n');

		return (0);
}
