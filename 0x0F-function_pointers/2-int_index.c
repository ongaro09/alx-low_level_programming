#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to an integer array.
 * @size: Number of elements in the array.
 * @cmp: Pointer to a function that takes an integer
 *      parameter and returns an integer.
 *
 * Return: The index of the first element for which cmp
 *      does not return 0, -1 if no element matches.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]))
			return (n);
	}
	return (-1);
}
