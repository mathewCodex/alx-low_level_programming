#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - print all elem of a list_t list
 *
 * @h: pointer to struct
 * Return: the number of nodes
 *
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	int elem_counter = 0;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
			printf("[%d] %s\n", temp->len, temp->str);
		elem_counter++;
		temp = temp->next;
	}
	return (elem_counter);
}
