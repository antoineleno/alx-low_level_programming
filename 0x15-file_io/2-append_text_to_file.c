#include "main.h"
/**
 * append_text_to_file - Function to append text to a file.
 * @filename: Name of the file.
 * @text_content: Text to append
 * Return: 1 on success otherwise -1
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int dp;
	int bytes_written, bytes_read;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (1);
	}

	dp = open(filename, O_WRONLY | O_APPEND);

	if (dp == -1)
	{
		close(dp);
		return (-1);
	}

	for (bytes_read = 0; text_content[bytes_read];)
	{
		bytes_read++;
	}

	bytes_written = write(dp, text_content, bytes_read);

	if (bytes_written == -1)
	{
		close(dp);
		return (-1);
	}

	close(dp);
	return (1);
}
