#include "main.h"

/**
 * append_text_to_file - Appends the specified text to the end of the specified
 * file.
 * @filename: The name of the file to append to.
 * @text_content: The text to append.
 *
 * Return: 1 if successful, -1 if failed.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, bytes_written, length;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		length = strlen(text_content);
		bytes_written = write(file_descriptor, text_content, length);
		if (bytes_written != length)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);

	return (1);
}
