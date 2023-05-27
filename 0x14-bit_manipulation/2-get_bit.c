#include "main.h"

/**
 * get_bit - returns the value of a bit at a given idx
 * @n: number
 * @index: pos
 * Return: value of bit idex
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	if (n == 0)
		return (0);
	n = n >> index;

	if ((n & 1) != 0)
		return (1);
	return (0);
}
