#include "main.h"
/**
 * _pow_recursion - like the built in function pow
 * @x: the number to calculate the power of
 * @y: the power of the number
 * Return: the power of the number
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
if (y == 0)
{
return (1);
}

return (x * _pow_recursion(x, y - 1));
}

