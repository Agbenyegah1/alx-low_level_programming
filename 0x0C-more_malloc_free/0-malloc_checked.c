#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Size of the memory to allocate.
 *
 * Return: Pointer to the allocated memory.
 *         Exits with status value 98 if malloc fails.
 */
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);

    if (ptr == NULL)
    {
        exit(98);
    }

    return ptr;
}
