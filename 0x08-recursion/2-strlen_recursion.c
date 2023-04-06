#include "main.h"

/**
 * _strlen_recursion - prints a str
 *
 * @s: str
 * Return: length of a str
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
