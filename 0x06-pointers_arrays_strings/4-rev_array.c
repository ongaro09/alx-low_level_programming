#include "main.h"

/**
 * reverse_array -  function that reverses the content of an array of integers.
 * @a: a pointer to the first element
 * @n: the number of elements in the array.
 *
 * return: no value.
 */

void reverse_array(int *a, int n)
{
	int i;
	int b;

	i = 0;
	while (i < n)
	{
		n--;
		b = a[i];
		a[i] = a[n];
		a[n] = b;
		i++;
	}
}
