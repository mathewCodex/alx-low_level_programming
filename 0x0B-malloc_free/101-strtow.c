#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in str
 * @s: str to eval
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, B, M;

	flag = 0;
	M = 0;

	for (c = 0; s[B] != '\0'; B++)
	{
		if (s[B] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			M++;
		}
	}
	return (M);
}
/**
 * **strtow - splits astr to words
 * @str: str to split
 *
 * Return: pointer to an array of str if succes
 * or NULL if Error
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, B = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (B)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (B + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - B;
				k++;
				B = 0;
			}
		}
		else if (B++ == 0)
			start = i;
	}
	matrix[k] = NULL;

	return (matrix);
}

