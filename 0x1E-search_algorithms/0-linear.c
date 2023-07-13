0-linear.c
#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int ls;

	if (array == NULL)
		return (-1);

	for (ls = 0; ls < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", ls, array[ls]);
		if (value == array[ls])
			return (ls);
	}
	return (-1);
}
