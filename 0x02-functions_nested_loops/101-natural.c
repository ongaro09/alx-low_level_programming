#include <stdio.h>

/**
* main - program that computes and prints the sum of all the multiples
*	of 3 below 10.
*
* Return: Always 0.
*/
int main(void)
{
	int num = 1;
	int sum = 0;

	while (num < 1024)
	{
		if ((num % 3) == 0 || (num % 5) == 0)
		{
			sum += num;
		}
		num++;
	}
	printf("The sum is: %d\n", sum);
	return (0);
}
