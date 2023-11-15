#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c
 * @c: The character to print
 * 
 * Return: 0 Always (Sucess)
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
