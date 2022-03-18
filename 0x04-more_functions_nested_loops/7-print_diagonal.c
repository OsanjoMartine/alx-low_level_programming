#include "main.h"

/**
 * print_diagonal - print diagonal in the terminal
 * @n: number of dashes
 *
 * Return: void
 */
void print_diagonal(int n)
{
	while (n > 0)
	{
		_putchar(' ');
		n--;
	}
	_putchar('\\');
	_putchar('\n');
}
