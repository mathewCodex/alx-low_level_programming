#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagnols of square matrix.
 *
 * @a: pointer to array element.
 * @size: size of matrix.
 * Return: nothing.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int tl = 0;
	int tr = 0;
	int s = size * size;

	for (i = 0; i < s; i += size + 1)
	{
		tl += a[i];
	}
	for (i = size - 1; i < s - 1; i += size - 1)
	{
		tr += a[i];
	}
	printf("%d, %d\n", tl, tr);
}
