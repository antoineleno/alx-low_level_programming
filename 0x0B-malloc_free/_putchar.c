#include <unistd.h>

/**
 * _putchar - Function to print a single character
 * @c: character to be printed
 * Return: The number of character printed.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
