#include <stdlib.h>
#include "lists.h"

/**
 * *add_nodeint - adds a new node at the start of a list
 * @head: pointer to head
 * @n: data to add
 * Return: address ofnew elem, and if NULL then its failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newN;

	if (*head == NULL)
		newN = *head;
	/* allocating a memory space with  malloc to newN */
	newN = malloc(sizeof(listint_t));
	if (newN == NULL)
		return (NULL);
	newN->n = n;
	newN->next = *head;
	*head = newN;

	return (newN);
}

