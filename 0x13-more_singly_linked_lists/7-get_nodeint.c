#include <stdlib.h>
#include "lists.h"

/**
 * *get_nodeint_at_index - returns the nth node of a linked list
 * @head: pointer to the first elem
 * @index: index of the nth
 * Return: nth of linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ct;
	listint_t *presentNode = head;

	for (ct = 0; presentNode != NULL; ct++)
	{
		if (ct == index)
			return (presentNode);
		presentNode = presentNode->next;
	}
	return (NULL);
}
