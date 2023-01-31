#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num_node;

	num_node = 0;
	while (h != NULL)
	{
		num_node++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num_node);
}
