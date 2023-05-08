#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - read and prints a txt file to thePOSIX API std 1
 *
 * @filename: file name
 * @letters: actual numb of letters that couls be read and printed
 * Return: actual numb of letters
 */
size_t read_textfile(const char *filename, size_t letters)
{
	ssize_t output, read, write;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	output = open(fikename, O_RDONLY);
	read = read(output,  buffer, letters);
	write = write(STDOUT_FILENO, buffer, read)

	if (output == -1 || read == -1 || write == -1 || write != read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(output);

	return (write);
}
