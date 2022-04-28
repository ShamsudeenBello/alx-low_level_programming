#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: parameter string
 * Return: Always 0
 */

void print_rev_recursion(char *s)
{
	if(*s != '\0')
	{
		return;

		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

