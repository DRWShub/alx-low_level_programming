#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0.
 */

int main(void)
{
	int first = 0, second = 1, sum, i;
	
	for (i = 1; i<= 98; i++)
	{
		sum = first + second;
		if (i != 98)
		{
			printf("%d, ", sum);
		}
		else
		{
			printf("%d\n", sum);
		}
		first = second;
		second = sum;
	}
	return (0);
}
