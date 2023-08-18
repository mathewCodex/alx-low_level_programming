#include "lists.h"

/**
 * insert_dnodeint_at_index - adds new node
 * at a specific pos
 * @h: head of list
 * @idx: idx of new node
 * @n: val of new node
 * Return: the address of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *tmp;
	unsigned int ctr;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*h == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}

	tmp = *h;
	for (ctr = 0; ctr < idx - 1; ctr++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}

	new->n = n;
	new->next = tmp->next;
	temp->next = new;
	new->prev =  tmp;

	return (new);
}
