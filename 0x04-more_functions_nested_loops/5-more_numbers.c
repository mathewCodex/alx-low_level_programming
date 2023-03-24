#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0-14.
 *
 */
void more_numbers(void)
{
	int i;
	int first_num;
	int sec_num;
	int result;

	i = 0;
	result = 0;
	while (i < 10)
	{
	while (result <= 14)
	{
		if (result < 10)
		{
		sec_num = result;
		}

		else
		{
		first_num = result / 10;
		sec_num = result % 10;
		_putchar (first_num + '0');
		}
		_putchar(sec_num + '0');
		result++;
	}
	i++;
	result = 0;
	_putchar ('\n');
	}
}
