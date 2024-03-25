#include <unistd.h>

/**
 * _putchar - Function to print a single character.
 * @c: Character to be printed.
 * Return: Return character printed.
*/


int _putchar(char c)
{
	return (write(1, &c, 1));
}
