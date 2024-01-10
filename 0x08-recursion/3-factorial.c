#include "main.h"

/**
 * factorial - Function to calculate the factorial of a number.
 * @n: Number to calculate its factorial.
 * Return: The factorial of a number.
*/

int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}

	else if (n < 0)
	{
		return (-1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}

