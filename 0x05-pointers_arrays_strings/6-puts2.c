#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: string
 *
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		if (str % 2 == 0)
			str++;
	}
}
