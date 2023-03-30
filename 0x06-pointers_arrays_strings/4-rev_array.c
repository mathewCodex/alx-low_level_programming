#include "main.h"

/**
 * reverse_array - rev the cont of an array of int.
 * @a: an array of int
 * @n: the num of elem to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}
}
