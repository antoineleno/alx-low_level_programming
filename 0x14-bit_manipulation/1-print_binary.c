#include "main.h"
/**
 * print_binary - Function to print a number in binary
 * @n: Number to be converted
*/

void print_binary(unsigned long int n)
{
	unsigned long int remainder = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	else
	{
		if (n > 1)
		{
			print_binary(n >> 1);
		}
		remainder = n & 1;
		_putchar(remainder + '0');
	}
}

