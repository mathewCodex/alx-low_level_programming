#include <stdarg.h>
#include "variadic_functions.h"

/**
 * *sum_them_all - sums all its params
 * @n: number of params
 * Return: sum of all params
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;
	va_list arg;

	va_start(arg, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, unsigned int);
	}
	return (sum);
}
