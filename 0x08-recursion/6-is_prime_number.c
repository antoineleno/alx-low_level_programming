#include "main.h"

/**
 * is_prime_number - Function to check wether a number is prime or not.
 * @n: Number to be checked.
 * Return: 1 if prime -1 if not.
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	else
	{
		return (_is_prime_number_helper(n - 1, n));
	}
}

/**
 * _is_prime_number_helper - Function to helpe the is prime function.
 * @m: All numbers less than n.
 * @n: Number to check.
 * Return: 1 if terminated, 0 if not a prime number.
*/

int _is_prime_number_helper(int m, int n)
{
	if (m == 1)
	{
		return (1);
	}

	else if (n % m == 0)
	{
		return (0);
	}

	else
	{
		return (_is_prime_number_helper(m - 1, n));
	}
}
