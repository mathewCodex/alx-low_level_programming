#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creating ....
 * @filename: name of file ....
 * @text_content: NULL terminated str
 * Return: 1 on ok else -1
 */
int create_file(const char *filename, char *text_content)
{
	int output, chars_W, str_length = 0;

	if (filename == NULL)
		return (-1);
	output = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (output == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[str_length])
			str_length++;
		chars_W = write(output, text_content, str_length);
		if (chars_W != str_length)
			return (-1);
	}
	close(output);
	return (1);
}
