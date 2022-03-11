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
	int n = 0;
	int num = 97;

	for (; n <= 9; n++)
	{
		putchar((n % 10) + '0');
	}

	while (num <= 102)
	{
		char c = num;

		putchar(c);
		num++;
	}

	putchar('\n');

	return (0);
}
