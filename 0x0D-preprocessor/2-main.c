#include "main.h"

/**
 * main - Entry point
 * Return: Always 0 (Success)
*/

int main(void)
{
	const char *file = __FILE__;

	while (*file != '\0')
	{
		_putchar(*file);
		file++;
	}
	_putchar('\n');

	return (0);
}
