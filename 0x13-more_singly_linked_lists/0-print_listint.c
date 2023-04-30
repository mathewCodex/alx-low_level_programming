#include "lists.h"
/**
 * print_listint - Prints all elems of a listint_t
 *
 * @h: pointer to head
 * Return: Number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *tmp = h;
	int count = 0;

	while (temp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		count++;
	}
	return (count);
}
