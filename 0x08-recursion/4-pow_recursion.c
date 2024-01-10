#include "main.h"

/**
 * _pow_recursion - Function to calculate the power of a number:
 * @x: Number to calculate the power.
 * @y: Power of a number.
 * Return: X raise to power y.
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}

	else if (y < 0)
	{
		return (-1);
	}

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
