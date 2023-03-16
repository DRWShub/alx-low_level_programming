#include "lists.h"

/**
 * free_dlistint - free memory of a doubly linked list
 * @head: pointer to head node of list
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
