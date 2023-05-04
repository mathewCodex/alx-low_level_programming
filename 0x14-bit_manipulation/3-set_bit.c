#include "main.h"

/**
 * set_bit - sets the val of a bit to 1 at a given index
 * @n: addr of n
 * @index: pos
 * Return: 1 if it worked
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n ^= (1 << index);
	return (1);
}
