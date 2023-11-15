#include"main.h"
#include <stdio.h>
/**
 * print_rev_recursion - Print a string in reverse.
 * @s: The string to be printed.
*/

void print_rev_recursion(char *s)
{
if (*s)
{
print_rev_recursion(s + 1);
putchar(*s);
}
}
