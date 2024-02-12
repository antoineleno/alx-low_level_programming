#include "main.h"
/**
 * create_file - Function to create a file
 * @filename: Name of the file
 * @text_content: The content of the file
 * Return: 1 of successful and otherwise -1
*/

int create_file(const char *filename, char *text_content)
{
	int dp, i;
	char message[6] = "fails";
	int bytes_written;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}

	dp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (dp == -1)
	{
		write(STDOUT_FILENO, message, strlen(message));
		close(dp);
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != NULL; i++);

	}

	bytes_written = write(dp, text_content, i);

	close(dp);
	return (1);
}
