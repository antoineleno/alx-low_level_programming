#include "main.h"
/**
 * array_range - Function to print array
 * @min: Minimum value to be printed
 * @max: Maximum value to be printed
 * Return: The array of integer
*/

int *array_range(int min, int max)
{
	int *array, i, n;

	if (min > max)
	{
		return (NULL);
	}
	n = max - min + 1;

	array = (int *)malloc(n * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++)
	{
		array[i] = min++;
	}

	return (array);
}
