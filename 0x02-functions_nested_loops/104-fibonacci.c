#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0.
 */

int main(void)
{
	int i, sum = 0, n = 98;

	for (i = 0; i < n; i++)
	{
		sum = (n - 2) + (n - 1);
		printf("%d", sum);
	}
	return (0);
}
