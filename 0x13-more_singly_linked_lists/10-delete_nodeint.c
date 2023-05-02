#include "lists.h"

/**
 * * delete_nodeint_at_index - deletes the node at idx of link list
 * @head: pointer to pointer to head
 * @index: pos of the node to be del
 * Return: 1 if ok else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *t, *nxt;

	/* if list is empty */
	if (*head == NULL)
		return (-1);
	t = *head;
	/*if head need to be removed*/
	if (index == 0)
	{
		*head = t->nxt; /* change the head */
		free(t); /*fre old head */
		return (1); /* success */
	}
	for (i = 0; t != NULL && i < index - 1; i++)
	{
		t = t->nxt;
	}
	/* if idx is greater than number of nodes */
	if (t == NULL || t->nxt == NULL)
		return (-1);
	nxt = t->nxt->nxt;

	free(t->nxt);
	t->nxt = nxt;
	return (1);
}
