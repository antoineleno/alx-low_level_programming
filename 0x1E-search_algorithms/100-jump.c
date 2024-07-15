#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - Function to search a value using jump search
 * @array: Array to search the value in
 * @size: Size of the array
 * @value: Value to be searched in the array
 * Return: Index of the value or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
    size_t low, high, my_jump, i;

    if (array == NULL || size == 0)
    {
        return (-1);
    }

    my_jump = sqrt(size);
    low = 0;
    high = my_jump;

    while (low < size && array[low] <= value)
    {
        printf("Value checked array[%ld] = [%d]\n", low, array[low]);

        if (array[high] >= value || high >= size)
        {
            printf("Value found between indexes [%ld] and [%ld]\n", low, high);
            for (i = low; i <= high && i < size; i++)
            {
                printf("Value checked array[%ld] = [%d]\n", i, array[i]);
                if (array[i] == value)
                {
                    return (i);
                }
            }
            return (-1);
        }
        low = high;
        high += my_jump;
        if (high > size - 1)
        {
            high = size;
        }
    }

    return (-1);
}
