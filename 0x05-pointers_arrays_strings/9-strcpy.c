#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies the string pointed to by src.
 *
 * @dest: pointer to buff.
 * @src: pointer to src str.
 * Return: string
 */
char *_strcpy(char *dest, cahr *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for (; x < l; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
