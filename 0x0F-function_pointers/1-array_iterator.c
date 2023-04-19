#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes func given as a params
 * on each elem of arr
 * @array: the array
 * @size: size of array
 * @action: func pointer
 * Return: none
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int a = size;
	int i;

	if (array && (size > 0) && action)
		for (i = 0; i < a; i++)
		{
			(action)(array[i]);
		}
}
