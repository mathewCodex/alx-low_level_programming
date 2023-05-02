#include "lists.h"

/**
 * *reverse_listint - revers a link
 *
 * @head: pointer to head
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = p;
		prev = (*head);
		(*head) = next;
	}
	*head = prev;
	return (*head);
}

