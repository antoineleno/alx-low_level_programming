#include "main.h"
/**
 * binary_to_uint - Function to convert binary number to unsigned int.
 * @b: Number to be converted
 * Return: The unsigned interger
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int lenght_of_b, i, decimal_number = 0, a;

	if (b == NULL)
	{
		return (0);
	}

	lenght_of_b = strlen(b);

	for (i = 0; i < lenght_of_b; i++)
	{
		if (b[i] != '1' && b[i] != '0')
		{
			return (0);
		}
		else
		{
			a = b[i] - '0';
			decimal_number = (decimal_number << 1) | a;
		}
	}

	return (decimal_number);
}
