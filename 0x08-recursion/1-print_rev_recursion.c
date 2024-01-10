#include "main.h"

/**
 * _print_rev_recursion - Function to print a string in reverse.
 * @s: String to be printed.
 * Return: NO value to be returned.
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}

