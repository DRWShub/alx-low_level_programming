#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0.
 */

int main(void)
{
	int i, n = 98;

	for (i = 0; i < n; i++)
	{
		printf("%d", fibonacci_numbers());
	}
	return (0);
}
int fibonacci_numbers(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else 
	{
		return fibonacci_numbers(n-2) + fibonacci_numbers(n-1);
	}
}
