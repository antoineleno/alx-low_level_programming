#include "main.h"

/**
 *_puts_recursion - function like puts();
 *@n: input
 *Return: Always 0 (Sucess)
*/


void _puts_recursion(char *n)
{
if (*n)
{
_putchar(*n);
_puts_recursion(n + 1);
}
else
{
_putchar('\n');
}
}
