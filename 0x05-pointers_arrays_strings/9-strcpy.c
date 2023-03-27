#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies the string pointed to by src.
 *
 * @dest: pointer to buff.
 * @src: pointer to src str.
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	char *f = dest;

	while (*src)
		*dest++ = *src++;
	return (f);
}
