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
	char message[6] = "fails";
	int bytes_written, bytes_read;


	dp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (dp == -1)
	{
		write(STDOUT_FILENO, message, strlen(message));
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
