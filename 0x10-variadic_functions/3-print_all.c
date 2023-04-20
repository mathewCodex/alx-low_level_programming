#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_all - print any
 * @format: types of arg
 * Return: none
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *s;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				printf("%s", s != NULL ? s : "(nil)");
				break;
			default:
				continue;
		}
		if (format[i])
			printf(", ");
	}
	printf("\n");
}
