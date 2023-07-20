#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: Pointer to an integer array.
 * @size: Size of the array.
 * @action: Function pointer to a function that takes
 *	an integer parameter and returns void.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		for (size_t i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
