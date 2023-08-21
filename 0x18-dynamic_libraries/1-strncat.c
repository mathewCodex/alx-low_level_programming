#include "main.h"

/**
 * *_strncat - concat two str.
 *
 * @dest: resulting string.
 * @src: src str
 * @n: str length
 * Return: pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, m;

	m = string_length(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[m + i] = src[i];
	}
	dest[m + i] = '\0';
	return (dest);
}

/**
 * string_length - finds the length of a str
 * Return: length of c.
 * @pointer: pointer.
 */
int string_length(char *pointer)
{
	int c = 0;

	while (*(pointer + c) != '\0')
	{
		c++;
	}
	return (c);
}
