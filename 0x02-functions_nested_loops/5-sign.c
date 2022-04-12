#include "main.h"
/**
 * print_sign - check for sign of number
 * @c: take in a number
 * Return: 1 and print + for > 0, 0 and print 0 for 0, -1 and print - for < 0.
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (+1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}

	else
	{
		return (-1);
		_putchar('-');
	}
}

