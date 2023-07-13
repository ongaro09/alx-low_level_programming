#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc and
 *	checks for allocation errors.
 * @b: Size of memory to allocate.
 *
 * Return: Pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	exit(98);

	return (ptr);
}
