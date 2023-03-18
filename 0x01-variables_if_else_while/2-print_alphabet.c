#include <stdio.h>

/**
 * main - Print lowercase Alphabet
 *
 * Return: Zero
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
		putchar('\n');
	return (0);
}
