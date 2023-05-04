#include "main.h"

/**
 * flip_bits - return the numb of bits
 * @n: first numb
 * @m: sec numb
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 0, ct = 0;

	mask = n ^ m;
	while (mask)
	{
		if (mask & 1)
			ct++;

		mask >>= 1;
	}
	return (ct);
}
