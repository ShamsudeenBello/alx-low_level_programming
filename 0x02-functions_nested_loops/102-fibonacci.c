#include <stdio.h>
/**
 * main - print first 50 fibaonnaci numbers, starting with 1 and 2,
 * 	  sepearted by a comma followed by a new line
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 =1, sum;
	
	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%d/n", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf('\n');
		else
			printf(", ");
	}

	return (0);
}
