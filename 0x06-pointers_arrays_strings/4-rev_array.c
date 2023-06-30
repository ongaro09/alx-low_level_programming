#include "main.h"

/**
 * reverse_array -  function that reverses the content of an array of integers.
 * @a: a pointer to the first element
 * @n: the number of elements in the array.
 *
 * return: no value.
 */

voidreverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0; i < n / 2; i++)
	{
		j = n - i - 1;
		tmp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = tmp;
	}
} 
