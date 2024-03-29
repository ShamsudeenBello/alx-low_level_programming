#include <stdio.h>

/**
 * main - prints the sum of even valued fibonacci sequence
 * 	  term not exceeding 4000000.
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fibsum;
	float tot_sum;

	while (1)
	{
		fibsum = fib1 + fib2;
		if (fibsum > 4000000)
			break;

		if ((fibsum % 2) == 0)
			tot_sum += fibsum;

		fib1 = fib2;
		fib2 = fibsum;
	}
	ptintf("%.of\n", tot_sum);

	return (0);
}
