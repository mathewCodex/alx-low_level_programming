#include "lists.h"

/**
 * *insert_nodeint_at_index - input a new node at a given pos
 * @head: inde of the list where the new node should be added
 * @idx: index of the list where node should be inputed
 * @n: elem to input
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *t, *newNode;

	t = *head;
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	for (i = 0; i < idx - 1; i++)
	{
		t = t->next;
		if (t == NULL)
		{
			return (NULL);
		}
	}
	newNode->next = t->next;
	t->next = newNode;
	return (newNode);
}
