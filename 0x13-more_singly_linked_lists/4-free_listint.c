#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - free a listint_t
 * @head: pointer to head
 * Return: none;
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
