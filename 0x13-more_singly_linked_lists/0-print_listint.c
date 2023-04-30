#include <stdlib.h>
#include "list.h"

/**
 * print_listint - printing the whole elem of listint_t
 * @h: pointer to head
 * Return: amount of nodes.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	int counter = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		counter++;
	}
	return (counter);
}
