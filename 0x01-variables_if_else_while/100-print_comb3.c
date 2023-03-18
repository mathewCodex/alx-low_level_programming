#include <stdio.h>

/**
  * main - print 00 nad 99
  *
  * Return:Zero
  */

int main(void)
{
	int i = 0;

	for (i = 0; i <= 99; i++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		if (i == 99)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

