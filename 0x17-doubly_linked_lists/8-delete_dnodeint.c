#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index of dlinked list
 * @head: pointer to head node of list
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			free(tmp);
			*head = NULL;
			return (1);
		}
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	for (i = 0; tmp != NULL; tmp = tmp->next, i++)
	{
		if (i == index)
		{
			tmp->prev->next = tmp->next;
			tmp->next->prev = tmp->prev;
			free(tmp);
			return (1);
		}
	}
	return (-1);
}
