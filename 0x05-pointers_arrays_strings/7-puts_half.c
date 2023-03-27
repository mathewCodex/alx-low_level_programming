#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints the second partof the string followed bay a new line
 * @str: Pointer to string
 * Return: Always 0 (success)
 */

void puts_half(char *str)
{
	int len = 0, i, n;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;

	for (i = n; i < len; i++)
		_puthar(str[i]);
	_putchar('\n');
}
