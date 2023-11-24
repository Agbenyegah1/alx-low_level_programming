#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes with zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: A pointer to the allocated memory.
 *         If nmemb or size is 0, or if malloc fails, returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return NULL;

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return NULL;

	for (i = 0; i < total_size; i++)
		*((char *)ptr + i) = 0;

	return ptr;
}
