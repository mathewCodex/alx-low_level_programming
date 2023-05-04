#include <stdlib.h>
#include "main.h"

/**
 * binary_to_unit - converting binary numb to unsigned int
 * @b: pointer to a str of 0 and 1 char
 * Return: converted numb
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int i = 0, decimal = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);
		/* shifting decimal by 1 bit to the left */
		decimal <<= 1;
		if (b[i] == '1')
			decimal += 1;
		i++;
	}
	return (decimal);
}
