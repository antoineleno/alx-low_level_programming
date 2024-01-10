#include "main.h"

/**
 * _sqrt_recursion - Function to calculate the square root of a number.
 * @n: NUmber to calculate its square root.
 * Return: The square root of a number.
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else
	{
		return (_sqrt_helper(1, n));
	}
}


/**
 * _sqrt_helper - function to helpe the recursive function
 * @guess: Number used to find the square root.
 * @n: Number takne from the first function.
 * Return: The square root of a number.
*/

int _sqrt_helper(int guess, int n)
{
	if (guess * guess == n)
	{
		return (guess);
	}

	else if (guess * guess > n)
	{
		return (-1);
	}

	else
	{
		return (_sqrt_helper(++guess, n));
	}
}
