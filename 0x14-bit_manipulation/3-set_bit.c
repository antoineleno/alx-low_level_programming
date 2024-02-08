#include "main.h"
/**
 * set_bit - Function to set bit
 * @n: Number to set its bit
 * @index: Index of the bit
 * Return: 1 if Successful, otherwise - 1
*/


int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size;
	unsigned int second_index = index;

	size = 8 * sizeof(unsigned long int);

	if (second_index >= size)
	{
		return (-1);
	}

	*n |= (1 << index);
	return (1);
}

