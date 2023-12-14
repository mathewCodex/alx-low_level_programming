#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array
 * 			of ints using linear search
 * @array: Apointer to the first elem
 * @size: The number of elem
 * @value: The val to search for
 *
 * Return: if val is not present or array is NULL
 * 	   -1 else,the first index where the val is located
 * Description: prints a val evry time it is compared in the arr
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
