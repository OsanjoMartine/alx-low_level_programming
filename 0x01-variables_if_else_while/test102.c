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
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
	{
		for (j = i; j <= 9; j++)
		{
			for (k = j; k <= 9; k++)
			{
				for (l = k; l <= 9; l++)
				{
					if (i == j && l == k)
					{
						continue;
					}

					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
