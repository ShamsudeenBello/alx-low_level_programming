#include <unistd.h>
/**
 * _putchar - writes the character
 *
 * Return: always return 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
