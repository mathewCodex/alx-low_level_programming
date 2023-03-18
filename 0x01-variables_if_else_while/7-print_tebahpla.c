#include <stdio.h>

/**
  * main - Print alpha in reverse
  *
  * Return: Zero
  */
int main(void)
{
	char ch = 'z';

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
		putchar('\n');
	return (0);
}
