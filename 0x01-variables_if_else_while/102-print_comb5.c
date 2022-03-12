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
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = i; j <= 99; j++)
		{


			putchar(i > 9 ? (i % 10) + '0' : i + '0');
			putchar(j > 9 ? (j % 10) + '0' : j + '0');
			putchar(' ');
			putchar(i > 9 ? (i % 10) + '0' : i + '0');
			putchar(j > 9 ? (j % 10) + '0' : j + '0');

			if (i == 8 && j == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
