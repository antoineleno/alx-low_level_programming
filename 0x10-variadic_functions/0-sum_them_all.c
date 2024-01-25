#include "variadic_functions.h"

/**
 * sum_them_all - function to sum all the given numbers
 * @n: Number of element to sum
 * Return: The sum of all its parameters, 0 if n is equal to 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list list_of_argument;
	unsigned int sum = 0, i;

	va_start(list_of_argument, n);

	if (n == 0)
	{
		return (0);
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			int x = va_arg(list_of_argument, int);

			sum += x;
		}
	}

	va_end(list_of_argument);
	return (sum);
}
