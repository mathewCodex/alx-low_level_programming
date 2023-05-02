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
	listint_t *t = head;

	while (t)
	{
		sum += t->n;

		t = t->next;
	}
	return (initialSumVal);
}
