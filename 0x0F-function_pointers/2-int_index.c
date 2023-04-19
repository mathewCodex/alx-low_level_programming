#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - search for an int.
 * @array: array of int.
 * @size: size of arr.
 * @cmp: pointer to the funct to compare values.
 *
 * Return: index if int are equal,
 * -1 if no element matches or if size <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
		for (i = 0; i < size; i++)
			if ((cmp)(array[i]))
				return (i);
	return (-1);
}
