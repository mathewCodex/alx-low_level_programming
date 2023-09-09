#include "hash_tables.h"

/**
 * key_index - egt the index at which a key/value
 * PAIR should be stored in arr of HT
 * @key: the kwy to get the idx
 * @size: size of arr of hash tables
 * Return: idx of key
 * Description: function will be depeneding on e djb2 algorithm
 */

unsigned  long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
