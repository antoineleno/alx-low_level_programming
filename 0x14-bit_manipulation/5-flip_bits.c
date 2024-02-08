#include "main.h"
/**
 * flip_bits - Function to flip bits
 * @n: First unsigned long int
 * @m: Second unsigned long int
 * Return:  The number of bits to flip
*/

int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		xor_result &= (xor_result - 1);
		count++;
	}

	return (count);
}

