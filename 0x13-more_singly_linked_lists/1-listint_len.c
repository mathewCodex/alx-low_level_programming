#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns the numb of elem in a link list
 *
 * @h: pointer to the head which is = h
 * Return: the numb of elem in a list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp = h;
	int ctr = 0; /*where ctr = counter */

	while (tmp != NULL)
	{
		tmp = tmp->next;
		ctr++;
	}
	return (ctr);
}
