#include <stdio.h>

/**
 *
 * Main - prints the first 98 Fibonacci numbers, starting with 1 and 2, followed by a new line.
 * Return: Always 0.
 */

int main(void)
{
	int total_sum, sum, first, second;

	total_sum = 0;
	sum = 0;
	first = 1;
	second = 2;
	while (sum < 97)
	{
		sum = first + second;
		if  (sum % 2 ==0)
		{
			total_sum += sum;
		}
		first = second;
		second = sum;
	}
	printf("%d\n", total_sum);
	return (0);
}
