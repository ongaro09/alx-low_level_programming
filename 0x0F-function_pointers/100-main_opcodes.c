#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 *
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 1 if the number of arguments is incorrect,
 *         and 2 if the number of bytes is negative.
 */
int main(int argc, char *argv[])
{
	char *main_addr = (char *)main;
	int bytes, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	if (bytes > 0)
	{
		for (i = 0; i < bytes - 1; i++)
		{
			printf("%02hhx ", main_addr[i]);
		}
		printf("%02hhx\n", main_addr[i]);
	}
	return (0);
}
