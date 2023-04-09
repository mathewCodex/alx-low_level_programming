#include<stdio.h>
#include <stdlib.h>

/**
 * main - print name of program
 * @argc:command line argument count
 * @argv:command line arguement array
 * Return:0
 */

int main(int argc, char *argv[])
{
	int i, res, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	res = 0, j = 0;
	for (i = 1; i < argc; i++)
	{
		while (argv[i][j])
		{
			if (!(argv[i][j] >= "1" && argv[i][j] <= "9"))
			{
				printf("Error\n");
				return (0);
			}
			j++;
		}
		res += strtol(argv[i], NULL, 10);
	}
	printf("%d\n", res);
	return (0);
}
