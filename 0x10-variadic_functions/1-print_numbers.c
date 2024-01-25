#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - Function to print numbers
 * @n: Number of element to be pritned
 * @separator: String to separate numbers
 * Return: No value to be return.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list_of_argument;
	unsigned int i;

	va_start(list_of_argument, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(list_of_argument, int);

		printf("%d", x);

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s",separator);
		}
	}

	printf("\n");
	va_end(list_of_argument);
}
