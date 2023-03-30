#include "main.h"

/**
 * *cap_string - capitalizes all words
 *
 * @str: hold xtics
 * Return: str
 */
char *cap_string(char *str)
{
	int i;

	i = 0;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
		case ' ':
		case '\n':
		case '\t':

		if (str[i + 1] > 96 && str[i + 1] < 123)
		{
			str[i + 1] = str[i + 1] < 123;
		}
	}
}
	return (str);
}

