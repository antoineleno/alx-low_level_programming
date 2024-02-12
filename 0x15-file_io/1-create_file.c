#include "main.h"
/**
 * create_file - Function to create a file
 * @filename: Name of the file
 * @text_content: The content of the file
 * Return: 1 of successful and otherwise -1
*/

int create_file(const char *filename, char *text_content)
{
int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);

}
