#include "main.h"
/**
 * _pow_recursion - function that returns the value of x raised to power y
 * @x: the base
 * @y: the exponent
 * Return: The value of x raised power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (_pow_recursion(x, y - 1) * x);
}
