#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n table of n passed
 * @n: this is a parameter passed for the table
 *
 * Return: 0 (Success)
 */
void print_times_table(int n)
{
	int i;
	int j;
	int prod;

	if (n > 15 || n < 0)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			prod = i * j;
			if (prod > 99)
			{
				if (j != 0)
				{
					_putchar(' ');
				}
				_putchar((prod / 100) % 10 + '0');
				_putchar((prod / 10) % 10 + '0');
				_putchar(prod % 10 + '0');
			}
			else if (prod > 9)
			{
				if (j == 0)
				{
					_putchar((prod / 10) % 10 + '0');
					_putchar(prod % 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((prod / 10) % 10 + '0');
					_putchar(prod % 10 + '0');

				}
			}
			else
			{
				if (j == 0)
				{
					_putchar(prod % 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(prod % 10 + '0');
				}
			}
			if (j != n)
			{
				_putchar(',');
			}
		}
		_putchar('\n');
	}
}