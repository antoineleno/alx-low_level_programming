#include "main.h"
#include <string.h>


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
		perror("Usage : file_from file_to\n");
		exit(97);
	}
	source_file = open(argv[1], O_RDONLY);
	if (source_file == -1 || argv[1] == NULL)
	{
		fprintf(stderr, "Error : Can't read from %s\n", argv[1]);
		exit(98);
	}
	destination_file = open(argv[2], O_WRONLY | O_CREAT, 0664);
	if (destination_file == -1)
	{
		fprintf(stderr, "Error : Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_read = read(source_file, buffer, 1025)) > 0)
	{
		bytes_written = write(destination_file, buffer, bytes_read);
		if (bytes_read != bytes_written)
		{
			return (-1);
		}
	}
	if (close(source_file) == - 1 || close(destination_file) == -1)
	{
		fprintf(stderr, "Error : Can't close %s\n", (source_file == -1) ? argv[1] : argv[2]);
		exit(100);
	}
	return (0);
}
