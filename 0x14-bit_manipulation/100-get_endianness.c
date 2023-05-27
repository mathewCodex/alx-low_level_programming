#include "main.h"

/**
 * get_endianness - checks end---ss
 * Return: 0 if big endian
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
