#include "main.h"
#include <stdlib.h>

/**
 * _memset - Fills memory with a constant byte.
 * @s: Pointer to the memory area to be filled.
 * @b: Constant byte to fill memory.
 * @n: Number of bytes to fill.
 *
 * Return: Pointer to the memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}

/**
 * _calloc - Allocates memory using calloc and initializes it to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element.
 *
 * Return: Pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
