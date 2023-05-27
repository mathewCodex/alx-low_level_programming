#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints  thew time table
 * @n: int for which the times table will be printed
 * Return: Zero all day
 */
void print_times_table(int n)
{
int i, j, k;
if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
k = j * i;
if (j == 0)
{
printf("%d", k);
}
else if (k < 10 && j != 0)
{
printf(",   %d", k);
}
else if (k >= 10 && k < 100)
{
printf(",  %d", k);
}
else if (k >= 100)
{
printf(", %d", k);
}
}
printf("\n");
}
}
}
