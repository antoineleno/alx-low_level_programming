#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _puts_recursion - like puts
 * @s:input
 * Return: 0 (Always)
*/

void _puts_recursion(char *s)
{
if (*s == '\0')
{
printf("\n");
}
else
{
putchar(*s);
_puts_recursion(s + 1);
}
}
