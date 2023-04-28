#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 *@head: pointer to the head of the list
 *@str: string to be added
 *
 * Return: returns the address to the new element or NULL
 * if failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newN;
	newN = malloc(sizeof(list_t));

	if (newN == NULL)
	{
		return (NULL);
	}
	newN->str = strdup(str);
	if (newN->str == NULL)
	{
		free(newN);
		return (NULL);
	}
	newN->len = strlen(str);
	newN->next = *head;
	*head = newN;
	return (newN);
}
