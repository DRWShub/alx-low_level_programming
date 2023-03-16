#include "lists.h"

/**
 * sum_dlistint - calculate the sum of all the number in the dlinked list
 * @head: pointer to head node of list
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
