#include "lists.h"

/**
 * dlistint_len - returns the length of elements in a linked dlistint_t list
 * @h: head of doubly linked list
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
