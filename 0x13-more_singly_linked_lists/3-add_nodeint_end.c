#include <stdlib.h>
#include "lists.h"

/**
 * *add_nodeint_end - adds a new node at the end of a list
 * @head: pointer to head
 * @n: new elem data
 * Return: address of new elem, andif it fails returns false
 */
listint_t *add_nodeint_end(listint_t **head, const int  n)
{
	listint_t *tmp, *newN;

	newN = malloc(sizeof(listint_t));
	if (newN == NULL)
		return (NULL);
	newN->n = n;
	newN->next = NULL;
	if (*head == NULL)
		*head = newN;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = newN;
	}
	return (newN);
}
