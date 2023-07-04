#include "main.h"
/**
 * print_chessboard - takes parameter a to print a chessboard
 * @a: a pointer to an array of arrays
 */
void print_chessboard(char (*a)[8])
{
	int p;
	int q;

	for (p = 0; p < 8; p++)
	{
		for (q = 0; q < 8; q++)
			_putchar(a[p][q]);
		_putchar(10);
	}
}
