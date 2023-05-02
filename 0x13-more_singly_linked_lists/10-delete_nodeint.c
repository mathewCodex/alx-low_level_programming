#include "lists.h"

/**
 * * delete_nodeint_at_index - deletes the node at idx of link list
 * @head: pointer to pointer to head
 * @index: pos of the node to be del
 * Return: 1 if ok else -i
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *t, *next;

	/* if empty link */
	if (*head == NULL)
		return (-1);

	t = *head;
	/* if head needs to be removed */
	if (index == 0)
	{
		*head = t->next; /*change head*/
		free(t); /*free old head*/
		return (1); /*success*/
	}
	for (i = 0; t != NULL && i < index - 1; i++)
	{
		t = t->next;
	}
	/* if idx is greater than number of nodes */
	if (t == NULL || t->next == NULL)
		return (-1);
	next = t->next->next;

	free(t->next);
	t->next = next;
	return (1);
}
