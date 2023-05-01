#include "lists.h"
/**
 * print_listint - Prints all elems of a listint_t
 *
 * @h: pointer to head
 * Return: Number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
