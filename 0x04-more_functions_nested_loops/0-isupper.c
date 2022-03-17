#include <stdio.h>

/**
 * _isupper - check if upper
 *
 * Return: 1 (Success)
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
