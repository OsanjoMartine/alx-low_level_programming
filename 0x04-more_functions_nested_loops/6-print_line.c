#include "main.h"

/**
 * print_line - print line in the terminal
 * @n: number of dashes
 *
 * Return: void
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('-');
		n--;
	}
}
