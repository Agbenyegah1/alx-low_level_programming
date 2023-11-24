#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: Size, in bytes, of the allocated space for ptr.
 * @new_size: New size, in bytes, of the new memory block.
 *
 * Return: A pointer to the newly allocated memory.
 *         If new_size is equal to old_size, returns ptr.
 *         If new_size is zero and ptr is not NULL, returns NULL and frees ptr.
 *         If ptr is NULL, the call is equivalent to malloc(new_size).
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return ptr;

	if (ptr == NULL)
		return malloc(new_size);

	if (new_size == 0)
	{
		free(ptr);
		return NULL;
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return NULL;

	for (i = 0; i < old_size && i < new_size; i++)
		new_ptr[i] = ((char *)ptr)[i];

	free(ptr);

	return new_ptr;
}
