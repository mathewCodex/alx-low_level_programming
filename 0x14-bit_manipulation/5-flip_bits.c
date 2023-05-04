#include "main.h"

/**
 * flip_bits - return the numb of bit needed to flip
 * @n: first numb
 * @m: second num
 * Return: numb of bits to be flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned lont int i = n ^ m;
	unsigned int ct = 0;

	while (i > 0)
	{
		ct++;
		i &= (i - 1);
	}
	return (ct);
}
