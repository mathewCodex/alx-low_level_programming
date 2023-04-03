#include "main.h"

/**
* *_strchr - locates a char in a str
*
* @s: str
* @c: char to be located
* Return: pointer to first occurence of NULL if no char found
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
