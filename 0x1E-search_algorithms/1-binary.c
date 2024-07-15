#include "search_algos.h"
#include <stdio.h>


/**
 * binary_search - Function to search a value using binary search
 * @array: Array to search the value in
 * @size: Size of the array
 * @value: Value to be searched in the array
 * Return: Index of the value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low, high, mid, i;

	low = 0;
	high = size - 1;


	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high)
	{
		mid = (high + low) / 2;
		printf("Searching in array: ");
		for (i = low; i < high + 1; i++)
		{
			if (i == high)
			{
				printf("%d\n", array[i]);
				break;
			}
			printf("%d, ", array[i]);
		}
		if (value == array[mid])
		{
			return (array[mid]);
		}
		else if (value < array[mid])
		{
			high = mid - 1;
		}
		else if (value > array[mid])
		{
			low = mid + 1;
		}
	}

	return (-1);
}

