#include "main.h"
#include <stdio.h>
/**
 * print_number - prints int with putchar
 * @n: takes number, hello
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int n;

	if (n < 0)
	{
		_putchar(' ');
		n = -n;
	}
	else
	{
		n = n;
	}
	if (n / 10 != 0)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
