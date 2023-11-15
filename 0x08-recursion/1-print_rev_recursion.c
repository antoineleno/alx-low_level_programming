#include"main.h"
#include <stdio.h>
/**
 * print_rev_recursion - Print a string in reverse.
 * @s: The string to be printed.
*/

void _putchar(char c);
void _print_rev_recursion(char *s);
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
