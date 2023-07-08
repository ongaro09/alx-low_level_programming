#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints The results of the multiplication.
 * @argc: Represents command-line arguments.
 * @argv: Array of strings.
 *
 *
 * Result: 0 (success), 1 if false.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
    }
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

