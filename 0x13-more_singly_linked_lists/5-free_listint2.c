#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free a linked list called listint_t
 * @head: point that points to head which is also a pointer
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *t, *n;

	if (*head == NULL)
		return;
	n = *head;
	while (n != NULL)
	{
		t = n->next;
		free(n);
		n = t;
	}
	*head = NULL;
}
