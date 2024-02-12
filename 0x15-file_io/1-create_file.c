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

	if (text_content != NULL)
	{
		for (bytes_read = 0; text_content[bytes_read];)
		bytes_read++;
	}
	
	bytes_read = strlen(text_content);


	dp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	bytes_written = write(dp, text_content, bytes_read);

	if (dp == -1 || bytes_written == -1)
	{
		return (-1);
	}

	close(dp);
	return (1);
}
