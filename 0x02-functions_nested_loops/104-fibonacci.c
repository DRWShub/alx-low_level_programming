#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0.
 */

int main(void)
{
	int i, n1 = 0, n2 = 1, sum, n = 98;

	for (i = 0; i < n; i++)
	{
		sum = n1 + n2;
		printf("%d\n", sum);
		n1 = n2;
	}
	return (0);
}
