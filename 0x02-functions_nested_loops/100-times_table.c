#include "main.h"

/**
 * print_times_table - prints the times table of number n,
 *   starting with 0.
 *
 * @n: integer.
 *
 */
void print_times_table(int n)
{
	int i, j, k;

	while (n > 15 || n < 0)
	{
		return;
	}

	for (i = 0; i <= n; i++)
	{
		_putchar('0');

		for (j = 1; j <= n; j++)
		{
			_putchar(',');
			_putchar(' ');

			k = i * j;

			if (k <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}

			else if (k <= 99)
			{
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			else
			{
				_putchar((k / 100) + '0');
				_putchar((k % 100) / 10 + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
