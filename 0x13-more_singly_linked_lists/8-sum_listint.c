#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - returns sum of all the data(n) of a linked list
 * @head: pointer
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int initialSumVal = 0;
	listint_t *t;

	if (head == NULL)
		return (0);
	t = head;

	while (t != NULL)
	{
		sum += t->n;

		t = t->next;
	}
	return (initialSumVal);
}
