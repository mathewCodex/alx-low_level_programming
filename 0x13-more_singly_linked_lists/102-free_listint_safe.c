#include "lists.h"

/**
 * free_listint_safe - free a linked
 * @h: pointer to the first node
 * Return: numb of elems in the freed list
 */
size_t free_listint_safe(listint_t **h)
	{
	size_t initialLen = 0;
	int difference;
	listint_t *t;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		difference = *h - (*h)->next;
		if (difference > 0)
		{
			t = (*h)->next;
			free(*h);
			*h = t;
			initialLen++;
		}
		else
		{
			free(*h);
			*h = NULL;
			initialLen++;
			break;
		}
	}

	*h = NULL;

	return (initialLen);
}

