#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - read and prints a txt file to thePOSIX API std 1
 *
 * @filename: file name
 * @letters: actual numb of letters that couls be read and printed
 * Return: actual numb of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t output, char_write, char_read;

	output = open(filename, O_RDONLY);
	if (output == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	char_read = read(output, buffer, letters);
	char_write = write(STDOUT_FILENO, buffer, char_read);

	free(buffer);
	close(output);
	return (char_write);
}
