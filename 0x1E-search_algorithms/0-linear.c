#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - Function to search a value using linear search
 * @array: Array to search the value in
 * @size: Size of the aarry
 * @value: Value to be searched in the array
 * Return: The value found or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}
	return (-1);
}

