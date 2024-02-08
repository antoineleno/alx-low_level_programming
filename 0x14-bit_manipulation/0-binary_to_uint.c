#include "main.h"

/**
 * binary_to_uint - Function to convert binary number to unsigned int.
 * @b: Number to be converted
 * Return: The unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_number = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		decimal_number = (decimal_number << 1) | (*b - '0');
		b++;
	}

	return (decimal_number);
}
