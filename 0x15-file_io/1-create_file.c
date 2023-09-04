#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file - text to it.
 * @filename: A pointer to the name of the file to be created.
 * @text_content: A pointer to the string that will be written
 * to the file.
 * Return: On success, it returns 1.
 * On failure, it returns -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
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

