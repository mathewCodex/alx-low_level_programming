#include <stdio.h>
#include <stdlib.h>


/**
 * main - print name of program
 * @argc:command line argument count
 * @argv:command line arguement array
 * Return:0
 */
int main(int argc, char *argv[])
{
	int i, res;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	res = 1;
	for (i = 1; i < argc; i++)
	{
		res *= strol(argv[i], NULL, 10);
	}
	printf("%d\n", res);
	return (0);
}
