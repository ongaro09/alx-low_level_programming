#include <stdio.h>

/**
 * main - function that prints a file using a predefined macro
 *
 * Return: 0 if Sucess, NULL Otherwise.
 *
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
