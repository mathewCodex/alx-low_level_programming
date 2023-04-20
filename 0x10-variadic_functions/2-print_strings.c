#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - prints str
 * @separator: str to be printed
 * @n: numb of int
 * Return: none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *string;

	var_start(strings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		printf("%s", string != NULL ? string : "(nil)");
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
