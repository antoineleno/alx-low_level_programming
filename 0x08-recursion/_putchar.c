#include "main.h"
#include <unistd.h>

/**
 * _puchar - writes the character c
 * @c: The character to print
 * 
 * Return: 0 Always (sucess)
*/

int _putchar( char c)
{
return ( write(1, &c, 1));
}