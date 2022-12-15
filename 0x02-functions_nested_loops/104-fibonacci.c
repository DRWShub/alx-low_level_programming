#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0.
 */

int main(void)
{
	int i, n1 = 0, n2 = 1, sum = 1, n = 98;

	for (i = 0; i < n; i++)
	{
		printf("%d", sum);
		n1 = n2;
		n2 = sum;
	}
	sum = n1 + n2;
	printf("%d", sum);
	return (0);
}
