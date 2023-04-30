#include <stdlib.h>
#include "list.h"

/**
 * print_listint - printing the whole elem of listint_t
 * @h: pointer to head
 * Return: amount of nodes.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *tmp = h;
	int count = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		count++;
	}
	return (count);
}
