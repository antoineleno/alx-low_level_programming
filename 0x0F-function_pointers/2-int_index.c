#include "function_pointers.h"
/**
 * int_index - Function that searches for an integer
 * @array: Array that content all the elements
 * @size: Size of the array
 * @cmp: pointer to the function
 * Return: -1 is no wathc otherse 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}