#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to an integer array.
 * @size: Number of elements in the array.
 * @cmp: Pointer to a function that takes an integer
 *	parameter and returns an integer.
 *
 * Return: The index of the first element for which cmp
 *	does not return 0, -1 if no element matches.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || cmp == NULL)
	{
		for (int i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
