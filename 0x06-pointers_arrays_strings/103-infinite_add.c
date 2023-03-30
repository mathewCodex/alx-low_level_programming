#include "main.h"

/**
 * infinite_add - add two number
 * @n1:num to add
 * @n2:num to add
 * @r:result
 * @size_r:size of r
 * Return:0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, resA, resB = 0, k = 0, V = size_r;

	while (n1[i])
	{
		i++;
	}
	while (n2[j])
	{
		j++;
	}
	i--, j--;
	size_r = i >= j ? i + 2 : j + 2;
	r[size_r] = '\0', size_r--, V = V - size_r;
	while (size_r > 0)
	{
		if (i >= 0 && j >= 0)
		{
			if ((k == 0 && (n1[i] != '0' || n2[j] != '0')) || k > 0)
			{
				resA = ((((n1[i] - 48) + (n2[j] - 48)) + resB) % 10) + '0';
			}
			resB = (((n1[i] - 48) + (n2[j] - 48) + resB) /  10);
		} else if (i >= 0)
		{
			resA = (n1[i] + resB - 48) % 10 + '0', resB = (n1[i] + resB - 48) / 10;
		} else if (j >= 0)
		{
			resA = (n2[j] + resB - 48) % 10 + '0', resB = (n2[j] + resB - 48) / 10;
		} else
		{
			break;
		}
		r[size_r] = resA, i--, j--, size_r--, k = 1;
	}
	r[size_r] = resB + '0';
	return (V <= 1 ? 0 : &r[0]);
}

