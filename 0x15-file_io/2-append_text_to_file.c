#include "holberton.h"
#include <fcntl.h>

/**
 * append_text_to_file - creates a file.
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, check;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content == NULL)
		return (-1);
	for (; text_content[len]; len++)
		;
	check = write(fd, text_content, len);
	if (check != len)
		return (-1);
	return (1);
}
