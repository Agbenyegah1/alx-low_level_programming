#include "main.h"

/**
 * malloc_checked - Allocates memory and exits with status 98 on failure.
 * @b: Size of the memory to allocate.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);

    if (!ptr)
    {
        fprintf(stderr, "Error: Failed to allocate %u bytes.\n", b);
        exit(98);
    }

    return ptr;
}
