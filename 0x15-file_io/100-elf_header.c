#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * display_elf_header - Displays the information from the ELF header.
 * @header: A pointer to the ELF header structure.
 */
void display_elf_header(Elf64_Ehdr *header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");
}

/**
 * print_error - Prints the error message and exits with status 98.
 * @msg: The error message to display.
 */
void print_error(const char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(EXIT_FAILURE);
}

/**
 * read_elf_header - Reads the ELF header from the file.
 * @filename: The name of the ELF file to read.
 * @header: A pointer to the ELF header structure to fill.
 *
 * Return: 0 on success, -1 on failure.
 */
int read_elf_header(const char *filename, Elf64_Ehdr *header)
{
	int fd = open(filename, O_RDONLY);
	ssize_t bytes_read = read(fd, header, sizeof(Elf64_Ehdr));

	if (fd == -1)
	{
		print_error("Error: Can't open file");
		return (-1);
	}

	if (bytes_read == -1)

	{
		print_error("Error: Can't read from file");
		close(fd);

		return (-1);
	}

	close(fd);

	return (0);
}
/**
 * main - Displays the information from the self header program
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	Elf64_Ehdr header;

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
		return (EXIT_FAILURE);
	}

	if (read_elf_header(argv[1], &header) == -1)
		return (EXIT_FAILURE);

	display_elf_header(&header);

	return (EXIT_SUCCESS);
}
