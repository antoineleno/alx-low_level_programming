#include "function_pointers.h"


/**
 * array_iterator - Function to iterate through an array
 * @array: Array to be iterate through
 * @size: Size of the array
 * @action: Function taken as argument
 * Return: No value to be return
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}


}
