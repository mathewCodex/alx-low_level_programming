#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the header node of a link list
 * @head: pointer to the pointer that points to head
 * Return: int = data of the node
 */
int pop_listint(listint_t **head)
{
	int nodeData;
	listint_t *t;

	h = *head;	/* let h =*head */

	if (!h)
	{
		return (0);
	}
	nodeData = (h)->n;
	t = (h)->next;
	free(h);
	h = t
	return (nodeData);
}

