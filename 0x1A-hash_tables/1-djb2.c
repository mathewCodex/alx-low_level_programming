#include "hash_tables.h"

/**
 * hash_djb2 - implement of the djb2 algorithm
 * @str: string to generate hash val
 * Return: hash balue
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash)  + c;
	}
	return (hash);
}
