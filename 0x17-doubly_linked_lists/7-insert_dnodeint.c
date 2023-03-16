#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index of dlinked list
 * @h: pointer to head node of list
 * @idx: index
 * @n: number
 * Return: pointer to node; NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node, *tmp;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	tmp = *h;
	for (i = 0; tmp != NULL; tmp = tmp->next, i++)
	{
		if (i == idx)
		{
			new_node = malloc(sizeof(dlistint_t));
			if (!new_node)
				return (NULL);
			new_node->n = n;
			new_node->next = tmp;
			new_node->prev = tmp->prev;
			tmp->prev->next = new_node;
			tmp->prev = new_node;
			return (new_node);
		}
	}
	if (i == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
