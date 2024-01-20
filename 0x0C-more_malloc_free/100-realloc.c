#include <stdlib.h>
#include <string.h>

/**
 * _realloc - Function to realloc memory after allocating it with malloc
 * @ptr: Pointer to the memory previously allocated with malloc
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size to realloc memory
 * Return: Pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    char *new_ptr;

    // If new_size is 0 and ptr is not NULL, free the memory and return NULL
    if (new_size == 0 && ptr != NULL)
    {
        free(ptr);
        return NULL;
    }

    // If ptr is NULL, equivalent to malloc(new_size)
    if (ptr == NULL)
    {
        new_ptr = malloc(new_size);
        if (new_ptr == NULL)
        {
            return NULL; // Memory allocation failed
        }
        return new_ptr;
    }

    // If old_size is equal to new_size, do nothing and return ptr
    if (old_size == new_size)
    {
        return ptr;
    }

    // Allocate a new memory block with the specified new_size
    new_ptr = malloc(new_size);
    if (new_ptr == NULL)
    {
        return NULL; // Memory allocation failed
    }

    // Copy the contents from the old block to the new block
    // Copy up to the minimum of the old and new sizes
    memcpy(new_ptr, ptr, (old_size < new_size) ? old_size : new_size);

    // Free the old memory block
    free(ptr);

    // Return the pointer to the newly reallocated memory block
    return new_ptr;
}
