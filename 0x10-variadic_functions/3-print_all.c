#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, *separator = "";

	va_list list_of_argument;

	va_start(list_of_argument, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", separator, va_arg(list_of_argument, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(list_of_argument, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(list_of_argument, double));
					break;
				case 's':
					string = va_arg(list_of_argument, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", separator, string);
					break;
				default:
					i++;
					continue;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list_of_argument);
}
