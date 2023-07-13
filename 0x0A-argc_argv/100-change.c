#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints minimum number of coins to make change
 * Description: cents is the amount you need to give back
 *             if number of arguments passed to program is not 1 print error
 *             if number passed to argument is negative print 0
 *             you can use number of coin values 25, 10,5,2 and 1 cent
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 if arguments is not 1
 *       :0 (otherwise)
 */
int main(int argc, char *argv[])
{
	int amt, coins[5] = {25, 10, 5, 2, 1};
	int j = 0, count = 0, ln = sizeof(coins) / sizeof(coins[0]);

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	amt = atoi(argv[1]);
	if (argc == 2 && amt >= 0)
	{
		for (j = 0; j < ln; j++)
		{
			count += amt / coins[j];
			amt %= coins[j];
		}
		printf("%d\n", count);
	}

	else
		printf("0\n");

	return (0);
}
