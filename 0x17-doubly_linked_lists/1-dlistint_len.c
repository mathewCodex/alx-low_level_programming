#include "lists.h"

/**
 * dlistint_len - retuens the numb of elem a double linked list
 * @h: head list
 * Return: numb of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
