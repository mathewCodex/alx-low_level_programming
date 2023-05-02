#include <stdlib.h>
#include "lists.h"

/**
 * *reverse_listint - revers a link
 *
 * @head: pointer to head
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p, *nxt;

	p = NULL;
	while (*head != NULL)
	{
		nxt = (*head)->nxt;
		(*head)->nxt = p;
		p = (*head);
		(*head) = nxt;
	}
	*head = p;
	return (*head);
}

