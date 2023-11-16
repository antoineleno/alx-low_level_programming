#include "main.h"
/**
 * _sqrt_recursion - like the built in function sqrt
 * @n: the input number
 * Return: the square of the number
*/

int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}
return (_help_sqrt_recursion(n, 0));
}

/**
 * _help_sqrt_recursion - the function called to help to do the calculation
 * @n: the input number
 * @i: the square root of the number
 * Return: the square root S
*/

int _help_sqrt_recursion(int n, int i)
{
if (i * i > n)
{
return (-1);
}
if (i * i == n)
{
return (i);
}
return (_help_sqrt_recursion(n, i + 1));
}
