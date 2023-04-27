#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free a list
 * @head: pointer to list
 * Return: none
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
