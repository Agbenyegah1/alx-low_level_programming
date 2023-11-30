#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of an array.
 *
 * @array: array to execute func on
 * @size: size of the array
 * @action: pointer to the function to use
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	while (size--)
		action(*array++);
}
