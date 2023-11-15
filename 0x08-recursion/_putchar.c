#include "main.h"
#include <unistd.h>

/**
 * _puchar - writes the character c 
 * @c: The character to print
 * 
 * Return: On sucess, the character written is returned.
 * On error, -1 is returned, and errno is set appropriately.
*/

int _putchar( char c)
{
return ( write(1, &c, 1));
}