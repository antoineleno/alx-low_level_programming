#include "main.h"
/**
 * read_textfile - Function to read a file
 * @letters: The number of letters it should read and print
 * @filename: The name of the file
 * Return: 0 if unsuccessfull
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int dp;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
	{
		return (0);
	}

	dp = open(filename, O_RDONLY);

	if (dp == -1)
	{
		return (0);
	}
²
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		close(dp);
		return (0);
	}
	bytes_read = read(dp, buffer, letters);
	if (bytes_read == -1)
	{
		close(dp);
		return (0);
	}
	bytes_written = write(1, buffer, letters);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(dp);
		return (0);
	}
	close(dp);
	free(buffer);
	return (bytes_written);
}

