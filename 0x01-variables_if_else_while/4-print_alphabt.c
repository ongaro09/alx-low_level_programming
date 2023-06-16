/*
 * File: 4-print_alphabt.c
 * Auth: Mark Ongaro
 */

#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and not q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
