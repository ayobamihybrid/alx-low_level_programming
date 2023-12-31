#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * Description: append_text_to_file - Adds text to the end of a file.
 * @filename: A pointer to the file's name.
 * @text_content: The string to be appended to the file.
 * Return: 1 on success.
 * -1 on failure or if the filename is NULL.
 * -1 if the file doesn't exist or if the user doesn't
 * have write permissions.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	w = write(fd, text_content, len);
	if (w == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
