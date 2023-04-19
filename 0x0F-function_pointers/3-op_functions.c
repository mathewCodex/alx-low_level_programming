#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - adds two numbs
 * @a: first numb
 * @b: second numb
 * Return: a + b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of two num
 * @a: first num
 * @b: second num
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - ...
 * @a: ...
 * @b: ...
 *
 * Return: ...
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two num
 * @a: first numb
 * @b: second numb
 * Return: a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * * op_mod - finds modulus of two numb
 * @a: first numb
 * @b: second numb
 * Return: a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
