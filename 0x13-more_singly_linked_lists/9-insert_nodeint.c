#include <stdlib.h>
#include "list.h"

/**
 * *insert_nodeint_at_index - input a new node at a given pos
 * @head: inde of the list where the new node should be added
 * @idx: index of the list where node should be inputed
 * @n: elem to input
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newList;
	listint_t *t = *head;

	/* mallocing */
	newList = malloc(sizeof(listint_t));
	if (!newList && !head)
		return (NULL);

	newList->n = n;
	newList->next = NULL;

	if (idx == 0)
	{
		newList->next = *head;
		*head = newList;
		return (newList);
	}
	/* looping through */
	for (i = 0; t && i < idx; i++)
	{
		if (i == idx - 1)
		{
			newList->next = temp->next;
			temp->next = newList;
			return (newList);
		}
		else
			t = t->next;
	}
	return (NULL);
}
