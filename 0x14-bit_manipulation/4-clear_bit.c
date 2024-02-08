#include "main.h"
/**
 * clear_bit - Function to clear bit at position index
 *@n: unsigned long integer
 *@index: Index of the bit to be cleared
 * Return: 1 if successful otherwise - 1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size;
	unsigned int second_index = index;

	size = 8 * sizeof(unsigned long int);

	if (second_index >= size)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
