#include "main.h"

/**
 * _puts_recursion - Function to print a string.
 * @s: String to be printed.
 * Return: No value to be return.
*/


void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}

	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}

