#include"main.h"

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Arguments
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i, j;

	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			_putchar(argv[i][j]);
		}
		_putchar('\n');
	}
	return (0);
}

