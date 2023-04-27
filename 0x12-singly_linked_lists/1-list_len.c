#include <stdlib.h>
#include "lists.h"

/**
 * list_len - return numb of elemts in a linked list
 * @h: pointer to struct
 * Return: number of elem in list_t
 */
size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	int elem_counter = 0;

	while (temp != NULL)
	{
		elem_counter++;
		temp = temp->next;
	}
	return (elem_counter);
}
