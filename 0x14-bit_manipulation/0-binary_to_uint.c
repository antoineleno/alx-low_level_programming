#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string containing the binary number.
 *
 * Return: The converted number, or 0 if:
 *         - There is one or more characters in the string 'b' that is not '0' or '1'.
 *         - 'b' is NULL.
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
