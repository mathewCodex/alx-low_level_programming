#include "main.h"

/**
 * get_endianness - checks end---ss
 * Return: 0 if big endian
 */
int get_endianness(void)
{
	int i = 1;
	char *cha = (char *)&i;

	if (*cha)
	return (1);
return (0);
}
