#include <stdlib.h>
#include "list.h"

/**
 * print_listint - printing the whole elem of listint_t
 * @h: pointer to head
 * Return: amount of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		count++;
		tmp = tmp->next;
	}
	return (count);
}
