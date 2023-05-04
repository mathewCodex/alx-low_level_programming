#include "main.h"

/**
 * clear_bit ------
 * @n: addr of n
 * @index: pos
 * Return: 1 if it worked, else -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
