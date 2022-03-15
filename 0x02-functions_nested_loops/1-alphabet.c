#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase
 *
 * Return: void (Success)
 *
 */
void print_alphabet(void)
{
	int alpha = 97;

	while (alpha <= 122)
	{
		char c = alpha;

		_putchar(c);
		alpha++;
	}
	_putchar('\n');
}

/**
 * main - entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	print_alphabet();

	return (0);
}
