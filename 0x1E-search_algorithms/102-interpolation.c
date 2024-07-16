#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - Searching the value in 
 * a array using interpolation search
 * @array: The array to search the value in
 * @size: The size of the array
 * @value: Value to be search in the array
 * Return: The index of the value if found otherwise -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;
	double fraction;
	low = 0;
	high = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high && value >= array[low] && value <= array[high])
	{
		fraction = (double)(array[high] - array[low]);
		pos = low + ((high - low) * (value - array[low]) / fraction);

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
		{
			return (pos);
		}

		if (array[pos] > value)
		{
			high = pos - 1;
		}
		else
		{
			low = pos + 1;
		}
	}


	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}

