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

	_putchar((i % 10) + '0');
	return (i % 10);
}