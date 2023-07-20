#include <stdio.h>
#include "main.h"

/**
 * print_name - Prints a name using a given function.
 * @name: Pointer to a character array representing the name.
 * @f: Function pointer to a function that takes a char*
 *	parameter and returns void.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
