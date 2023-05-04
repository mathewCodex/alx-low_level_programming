#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * binary_to_unit - converting binary numb to unsigned int
 * @b: pointer to a str of 0 and 1 char
 * Return: converted numb
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int i = 0, ct = 0, sum = 0;

	if (b == NULL)
		return (0);

	i = _strlen(b);
	while (i--)
	{
		if (b[i] != 48 && b[i] != 49)
		return (0);

		if (b[i] == 49)
			/* shift ct 1 bit left and assign it to sum and adding */
			sum += 1 << ct;

		ct++;
	}
	return (sum);
}
/**
 * _strlen - Rts the len of str
 * @s: str to ct
 * Return: str len
 */
int _strlen(const char *s)
{
	int c = 0;

	while (s[c])
		c++;
	return (c);
}
