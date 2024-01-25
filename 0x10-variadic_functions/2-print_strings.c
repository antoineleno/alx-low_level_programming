#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Function to print strings
 * @separator: String to separate between the strings
 * @n: The number of string passed
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list_of_argument;
	unsigned int i;

	va_start(list_of_argument, n);

	for (i = 0; i < n; i++)
	{
		char *string = va_arg(list_of_argument, char *);

		if (separator == NULL)
		{
			printf("%s ", string);
		}
		else
		{
			if (i != 0)
			{
				printf("%s %s", separator, string);
			}
			else
			{
				printf("%s", string);
			}
		}

	}
	printf("\n");
}

