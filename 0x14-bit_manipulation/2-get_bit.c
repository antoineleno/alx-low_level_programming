#include "main.h"
/**
 * get_bit - Function to get the bit at a given position
 * @n: Unsigned long integer to retreive the index
 * @index: The index of the bit
 * Return: The index of the bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int NumberBits = 0;
	unsigned long int Bitindex, i;
	unsigned long int temp = n;

	while (temp > 0)
	{
		NumberBits++;
		temp = temp >> 1;
	}

	if (index >= NumberBits)
	{
		return (-1);
	}

	Bitindex = (n >> index) & 1;
	return (Bitindex);
}
