#include <stdio.h>

/**
  * main - prints its name, followed by new.
  * @argc: argument counter.
  * @argv: argument vector.
  * Return: zero.
  */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	return (sizeof(argv[0]) - sizeof(argv[0]));
}
