#include "main.h"
/**
 * main - Entry point
 * @argc: Number of argument enter while executing the program
 * @argv: Arguments enter while executing the program
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int destination_file, source_file, bytes_read, bytes_written;
	char buffer[1025];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	source_file = open(argv[1], O_RDONLY);
	if (source_file == -1 || argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	destination_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (destination_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = read(source_file, buffer, sizeof(buffer) - 1)) > 0)
	{
		bytes_written = write(destination_file, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(source_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_file);
		exit(100);
	}
	if (close(destination_file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", destination_file);
		exit(100);
	}
	return (0);
}
