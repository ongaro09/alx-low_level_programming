#include "main.h"

/**
 * reset_to_98 - Takes a pointer to an int
 * @n: points to the integer
 * 
 */

void reset_to_98(int *n)

{
	int n = 98;
	int *ptr = &n;

	{
		_putchar(&n);
	}

	_putchar('\n');
}
