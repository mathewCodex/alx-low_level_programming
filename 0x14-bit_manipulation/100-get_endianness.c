#include "main.h"

/**
 * get_endianness - checks end---ss
 * Return: 0 if big endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *cha = (char *)&i;

	return (*cha);
}
