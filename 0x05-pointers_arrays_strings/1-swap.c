#include "main.h"
#include <stdio.h>

/**
 * swap_int - Take int two params
 * @a: in params
 * @b: out params
 * Return: Zero
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
