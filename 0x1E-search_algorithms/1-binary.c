#include "search_algos.h"
/**
 * binary_search - Searches for a val
 * @array: ptr to the first elem
 * @size: The numb of elem in the array
 * @value: the val
 *
 * Return: if the val is not present or the arr is NULL
 *
 * Description: Prints the [sub]array being searched after
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
