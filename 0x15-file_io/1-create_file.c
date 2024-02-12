#include "main.h"
/**
 * create_file - Function to create a file
 * @filename: Name of the file
 * @text_content: The content of the file
 * Return: 1 of successful and otherwise -1
*/

int create_file(const char *filename, char *text_content)
{
	int dp;
	int bytes_written, bytes_read;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		return (-1);
	}

	dp = open(filename, O_WRONLY | O_CREAT, 0600);

	if (dp == -1)
	{
		write(STDOUT_FILENO, "fails", 5);
		close(dp);
		return (-1);
	}

	bytes_read = strlen(text_content);

	bytes_written = write(dp, text_content, bytes_read);

	if (bytes_read != bytes_written)
	{
		close(dp);
		return (-1);
	}

	close(dp);
	return (1);
}
