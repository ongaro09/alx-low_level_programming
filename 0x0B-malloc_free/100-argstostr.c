#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatanates all arguments of program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to newly allocated space in memory
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg, i, n = ac, byte;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			n++;
	}

	str = malloc(n + 1);

	if (str == NULL)
		return (NULL);

	i = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			str[i++] = av[arg][byte];

		str[i++] = '\n';
	}

	str[n] = '\0';

	return (str);

}
