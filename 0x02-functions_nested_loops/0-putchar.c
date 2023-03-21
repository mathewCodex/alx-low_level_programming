#include "main.h"

/**
 * main - debugging example
 * Return: 0
 */
int main(void)
{
	char *putchar = "_putchar";

	while (*putchar)
	{
		_putchar(*putchar);
		holberton++;
	}
	_putchar('\n');
	return (0);
}
