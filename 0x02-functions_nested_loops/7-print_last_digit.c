#include "main.h"

/**
 * print_last_digit - prints the sign of the number entered
 *@n: variable that could be any character
 *
 * Return: 1 (Success)
 */
int print_last_digit(int n)
{
	int i = (int)n;

	if (i < 0)
	{
		i = i * -1;
	}

	_putchar((i % 10) + '0');
	return (i % 10);
}
