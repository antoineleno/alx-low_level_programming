#include "main.h"

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Arguments passed.
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	int n;
	(void)argv;
	if (argc == 1)
	{
		_putchar('0');
	}

	else
	{
		n = argc - 1;
		_putchar(n + '0');
	}
	_putchar('\n');
	return (0);
}
