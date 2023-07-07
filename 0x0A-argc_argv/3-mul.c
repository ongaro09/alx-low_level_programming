#include <stdlib.h>
#include <stdio.h>

/**
 *main -  multiplies two integers.
 *@argc: number of attributes
 *@argv: Array of arguments
 *Return: 0. 
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", result);
	}

	return (0);
}
