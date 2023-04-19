#include <stddef.h>
#include "function_pointers.h"

/**
 * *print_name - prints a name
 * @name: name of person
 * @f: pointer to function f.
 * Return : none
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
