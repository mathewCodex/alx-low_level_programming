#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
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
	int fileDes, chars_read, chars_written;
	char *buffer;

	if (filename == NULL)
		return (0);
	fileDes = open(filename, O_RDONLY);
	if (fileDes == -1)
		return (0);
	buffer = malloc(sizeofof(char) * letters);
	if (buffer == NULL)
		return (0);
	chars_read = read(fileDes, buffer, letters);
	if (char_read == -1)
		return (0);
	chars_written = write(STDOUT_FILENO, buffer, chars_read);
	if (chars_written == -1)
		return (0);
	close(fileDes);
	free(buffer);
	return (chars_written);
}
