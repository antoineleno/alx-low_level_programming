#include <unistd.h>
/**
 * _putchar - function to print a single character
 * @c: Character to be printed
 * Return: 1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
