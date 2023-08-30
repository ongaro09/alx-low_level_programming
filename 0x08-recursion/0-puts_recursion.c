#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string followed by a new line.
 *
 * @s: string
 *
 * Return: void
 */


void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar(10);
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);

}

/**
 * main - checks the code
 *
 * Return: Always 0.
 */

int main(void)
{
	_puts_recursion("C is fun!");

	return (0);
}
