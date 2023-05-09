#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - appending txt at end
 * @filename: -----
 * @text_content: ---**
 * Return: 1 on ok res and -1 on not ok : (
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int output, char_append, str_length = 0;

	if (filename == NULL)
		return (-1);
	output = open(filename, O_WRONLY | O_APPEND);
	if (output == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[str_length])
			str_length++;
		char_append = write(output, text_content, str_length);
		if (char_append != str_length)
			return (-1);
	}
	close(output);
	return (1);
}
