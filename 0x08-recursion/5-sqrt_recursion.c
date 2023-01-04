#include "main.h"

/**
 * help - helps decide if I am right
 * @i: integer to guess
 * @n: integer to get root of
 * Return: value of root
 */
int help(int i, int n)
{
	int j;

	if (i * i != n)
	{
		if (i > n)
		{
			return (-1);
		}
		j = help(i + 1, n);
		return (j + 1);
	}
	return (0);
}
/**
 * _sqrt_recursion - returns square root
 * @n: integer to return
 * Return: returns int of squareroot
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (help(i, n) == n && n != 1)
		return (-1);
	return (help(i, n));
}
