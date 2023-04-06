#include "main.h"

/**
 * factorial - return the factorial of a given number
 *
 * @n: number
 * Return: -1 if n is lower than 0, ese factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
