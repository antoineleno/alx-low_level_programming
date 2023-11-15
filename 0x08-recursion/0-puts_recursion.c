#include "main.h"

/**
 * _puts_recursion - function like puts();
 * @s: input
 * @c: Character char c
 * Return: Always 0 (Sucess)
*/
void _putchar(char c);
void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursion(s + 1);
}
else
_putchar('\n');
}
